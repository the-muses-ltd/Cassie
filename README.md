# The Cassie Project

### Increasing neuroplasticity to enhance fluid intelligence using real-time machine learning.

Project Cassie aims to completely redesign the way we learn and improve our cognitive ability, with an emphasis on tailored learning experiences that cater to the individual, instead of the "one size fits all" education systems we currently have. Cassie uses player data to creat Player Behavioural Models in order to update parameters within the game engine to make real-time updates to improve users ability to learn and increase neuroplasticity.
<br>
<div style="text-align: center;">
<img src="https://github.com/the-muses-ltd/Cassie/blob/main/Readme%20Assets/neuron.gif?raw=true" width="30%" />
</div>
<br>
<br>

### Proof of concept
This repository includes a proof of concept for the integration of Deep Neural Networks into Unreal Engine 4. This repository proves the ability to succesfully make real time updates in game by feeding real-time user data into a Deep Neural Network to make predictions within milliseconds. Further Machine Learning integrations specifically aimed at mapping neuroplasticy levels from fNIRS data with user behaviour data are coming soon to this repository.


## Architecture and Frameworks
We strive to use cutting edge technologies to future proof any implementations of our software systems, this includes using best practices and scalable frameworks. See how we have been building Project Cassie below.
<br>
<br>
<div style="text-align: center;">
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/0/0c/Unreal_Engine_4_logo_and_wordmark.svg/200px-Unreal_Engine_4_logo_and_wordmark.svg.png" width="20%" />
</div>

#### Unreal Engine 4
The game engine powering all of our user experiences and neural network integrations is Unreal Engine 4, which allows for high performance games that enable beautiful visuals to keep our learners engaged.
<br>
<br>
<div style="text-align: center;">
<img src="https://blog.ronsonchan.com/content/images/size/w2000/2018/04/2000px-Tensorflow_logo.svg-1-.png" width="20%" text-align="center"/>
</div>

#### TensorFlow
All our Machine Learning Models and Neural Networks are written and tuned in TensorFlow when appropriate and if necessary, re-written directly in C++ to improve in game performance of predictions. TensorFlow allows ML engineers to quickly iterate through potential model architectures and easy utilisation of GPU for our models, however productionised models re-written in C++ can benefit from computational performance increases.


### References
Thanks to the great work of [Getnamo](https://github.com/getnamo), we were able to leverage their work in Python and Tensorflow plugins for Unreal Engine 4, which allowed us to train our models in Python and then import them into the UE4 game engine to be utilised for real time predictions.