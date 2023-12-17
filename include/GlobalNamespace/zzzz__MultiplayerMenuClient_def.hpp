#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerMenuClient)
namespace GlobalNamespace {
class MenuPlayerController;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMenuClient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerMenuClient);
// Type: ::MultiplayerMenuClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5583))
// CS Name: ::MultiplayerMenuClient*
class CORDL_TYPE MultiplayerMenuClient : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _menuPlayerController offset 0x18
 __declspec(property(get=__get__menuPlayerController, put=__set__menuPlayerController)) ::GlobalNamespace::MenuPlayerController*  _menuPlayerController;

/// @brief Field _nodePoseSyncStateManager offset 0x20
 __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager)) ::GlobalNamespace::INodePoseSyncStateManager*  _nodePoseSyncStateManager;

constexpr void __set__menuPlayerController(::GlobalNamespace::MenuPlayerController*  value) ;

constexpr ::GlobalNamespace::MenuPlayerController* __get__menuPlayerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuPlayerController*> __get__menuPlayerController() const;

constexpr void __set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager*  value) ;

constexpr ::GlobalNamespace::INodePoseSyncStateManager* __get__nodePoseSyncStateManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> __get__nodePoseSyncStateManager() const;

/// @brief Method LateUpdate addr 0x22a74e4 size 0x378 virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MultiplayerMenuClient* New_ctor() ;

/// @brief Method .ctor addr 0x22a785c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerMenuClient(MultiplayerMenuClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerMenuClient(MultiplayerMenuClient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerMenuClient()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMenuClient, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMenuClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMenuClient*, "", "MultiplayerMenuClient");
