vid = videoinput('winvideo', 1, 'YUY2_1280x720');
vid.FramesPerTrigger = 1;
vid.ReturnedColorspace = 'rgb';
triggerconfig(vid, 'manual');
vidRes = get(vid, 'VideoResolution');
imWidth = vidRes(1);
imHeight = vidRes(2);
nBands = get(vid, 'NumberOfBands');
hImage = image(zeros(imHeight, imWidth, nBands))
preview(vid, hImage);
 
% prepare for capturing the image preview
start(vid); 
% pause for 3 seconds to give our webcam a "warm-up" time
pause(3); 
% do capture!
trigger(vid);
% stop the preview
stoppreview(vid);
% get the captured image data and save it on capt1 variable
capt1 = getdata(vid);
% now write capt1 into file named captured.png
imwrite(capt1, 'captured.jpg');
% just dialog that we are done capturing
imshow('captured.jpg');