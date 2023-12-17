#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AddToNewGameObjectComponentProvider)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class AddToNewGameObjectComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToNewGameObjectComponentProvider);
// Type: Zenject::AddToNewGameObjectComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11186))
// CS Name: ::Zenject::AddToNewGameObjectComponentProvider*
class CORDL_TYPE AddToNewGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::AddToGameObjectComponentProviderBase)]{};

/// @brief Field _gameObjectBindInfo offset 0x38
 __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters*  _gameObjectBindInfo;

 __declspec(property(get=get_ShouldToggleActive)) bool  ShouldToggleActive;

constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get__gameObjectBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get__gameObjectBindInfo() const;

static inline ::Zenject::AddToNewGameObjectComponentProvider* New_ctor(::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback) ;

/// @brief Method .ctor addr 0x2f06bc4 size 0x2c virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback) ;

/// @brief Method get_ShouldToggleActive addr 0x2f06bf0 size 0x8 virtual true final false
inline bool get_ShouldToggleActive() ;

/// @brief Method GetGameObject addr 0x2f06bf8 size 0x5c virtual true final false
inline ::UnityEngine::GameObject* GetGameObject(::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "AddToNewGameObjectComponentProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddToNewGameObjectComponentProvider(AddToNewGameObjectComponentProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddToNewGameObjectComponentProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddToNewGameObjectComponentProvider(AddToNewGameObjectComponentProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AddToNewGameObjectComponentProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AddToNewGameObjectComponentProvider, 0x40>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::AddToNewGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToNewGameObjectComponentProvider*, "Zenject", "AddToNewGameObjectComponentProvider");
