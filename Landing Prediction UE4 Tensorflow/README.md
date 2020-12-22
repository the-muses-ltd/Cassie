# UE4 Game Environment with tensorflow integration for ML Testing

Environment for testing ANN model that takes in player data and updates world parameters accordingly.

This is a basic UE4 Environment that utilizes a neural network by taking in player behaviour data from Unreal Engine as an input and outputs environmental parameter updates which are applied in-game. The neural network model has been integrated with a simple game that takes in a player's location and velocity at the point of jumping and predicts where they will land. This prediction is used to spawn a block at the predicted landing point to catch the player.

#### Requirements

UE 4.23
AFRICAN ANIMALS PACK BY PROTOFACTOR INC (can be downloaded for free from Epic Games Marketplace)
tensorflow-ue4 plugin v0.14.0 for UE4.23 from getnamo (https://github.com/getnamo/tensorflow-ue4/releases/tag/0.14.0)
TensorFlow 1.15
Python 3.5–3.8

#### Video Overview

https://vimeo.com/486239754
