//
// AssetsManager.hh for bomberman in /home/girard_r/rendu/cpp_bomberman
// 
// Made by Aurélien GIRARDEAU
// Login   <girard_r@epitech.net>
// 
// Started on  Wed Jun  3 11:46:01 2015 Aurélien GIRARDEAU
// Last update Tue Jun  9 14:12:32 2015 Aurélien GIRARDEAU
//

#ifndef ASSETS_MANAGER_HH
# define ASSETS_MANAGER_HH

# include <Game.hh>
# include <SdlContext.hh>
# include <BasicShader.hh>
# include <Texture.hh>
# include <Geometry.hh>
# include <Model.hh>

class			AssetsManager
{
  /* Pointer to Singleton Instance */
private :
  static AssetsManager*	_assetsManager;

  /* Unique attributes heap allocation */
  gdl::Model*		_bombModel;
  gdl::Model*		_charOneModel;
  gdl::Model*		_charTwoModel;
  gdl::Model*		_explosionModel;

  /* Private Constructors for access in the scope only */
private :
  AssetsManager();
  ~AssetsManager();

  /* Singleton Methods for instanciation and destruction */
public :
  static void		instanciateAssetsManager();
  static void		destroyAssetsManager();

  /* Models Getters */
  static gdl::Model*	getBombModel();
  static gdl::Model*	getCharacterOneModel();
  static gdl::Model*	getCharacterTwoModel();
  static gdl::Model*	getFireModel();
};

#endif
