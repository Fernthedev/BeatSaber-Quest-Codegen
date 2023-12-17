#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabDynamicContext)
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewPrefabDynamicContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabDynamicContext);
// Type: Zenject::SubContainerCreatorByNewPrefabDynamicContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11295))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11274))
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabDynamicContext*
class CORDL_TYPE SubContainerCreatorByNewPrefabDynamicContext : public ::Zenject::SubContainerCreatorDynamicContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorDynamicContext)]{};

/// @brief Field _prefabProvider offset 0x18
 __declspec(property(get=__get__prefabProvider, put=__set__prefabProvider)) ::Zenject::IPrefabProvider*  _prefabProvider;

/// @brief Field _gameObjectBindInfo offset 0x20
 __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters*  _gameObjectBindInfo;

constexpr void __set__prefabProvider(::Zenject::IPrefabProvider*  value) ;

constexpr ::Zenject::IPrefabProvider* __get__prefabProvider() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> __get__prefabProvider() const;

constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get__gameObjectBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get__gameObjectBindInfo() const;

static inline ::Zenject::SubContainerCreatorByNewPrefabDynamicContext* New_ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2f0c1cc size 0x3c virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo) ;

/// @brief Method CreateGameObject addr 0x2f0c208 size 0x1c0 virtual true final false
inline ::UnityEngine::GameObject* CreateGameObject(ByRef<bool>  shouldMakeActive) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabDynamicContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByNewPrefabDynamicContext(SubContainerCreatorByNewPrefabDynamicContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabDynamicContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByNewPrefabDynamicContext(SubContainerCreatorByNewPrefabDynamicContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByNewPrefabDynamicContext()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefabDynamicContext, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabDynamicContext*, "Zenject", "SubContainerCreatorByNewPrefabDynamicContext");
