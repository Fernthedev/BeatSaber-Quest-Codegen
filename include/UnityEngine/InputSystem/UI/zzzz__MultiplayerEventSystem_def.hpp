#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerEventSystem)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class MultiplayerEventSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
// Type: UnityEngine.InputSystem.UI::MultiplayerEventSystem
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13191))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6377))
// CS Name: ::UnityEngine.InputSystem.UI::MultiplayerEventSystem*
class CORDL_TYPE MultiplayerEventSystem : public ::UnityEngine::EventSystems::EventSystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::EventSystems::EventSystem)]{};

/// @brief Field m_PlayerRoot offset 0x50
 __declspec(property(get=__get_m_PlayerRoot, put=__set_m_PlayerRoot)) ::UnityEngine::GameObject*  m_PlayerRoot;

 __declspec(property(get=get_playerRoot, put=set_playerRoot)) ::UnityEngine::GameObject*  playerRoot;

constexpr void __set_m_PlayerRoot(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_PlayerRoot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_PlayerRoot() const;

/// @brief Method get_playerRoot addr 0x2ad6510 size 0x8 virtual false final false
inline ::UnityEngine::GameObject* get_playerRoot() ;

/// @brief Method set_playerRoot addr 0x2ad6518 size 0x8 virtual false final false
inline void set_playerRoot(::UnityEngine::GameObject*  value) ;

/// @brief Method OnEnable addr 0x2ad65e4 size 0x1c virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2ad6600 size 0x8 virtual true final false
inline void OnDisable() ;

/// @brief Method InitializePlayerRoot addr 0x2ad6520 size 0xc4 virtual false final false
inline void InitializePlayerRoot() ;

/// @brief Method Update addr 0x2ad6608 size 0x108 virtual true final false
inline void Update() ;

static inline ::UnityEngine::InputSystem::UI::MultiplayerEventSystem* New_ctor() ;

/// @brief Method .ctor addr 0x2ad6710 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerEventSystem(MultiplayerEventSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerEventSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerEventSystem(MultiplayerEventSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerEventSystem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::MultiplayerEventSystem, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::MultiplayerEventSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::MultiplayerEventSystem*, "UnityEngine.InputSystem.UI", "MultiplayerEventSystem");
