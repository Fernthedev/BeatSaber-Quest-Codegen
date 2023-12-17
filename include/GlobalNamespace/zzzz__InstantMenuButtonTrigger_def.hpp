#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InstantMenuButtonTrigger)
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class InstantMenuButtonTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InstantMenuButtonTrigger);
// Type: ::InstantMenuButtonTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5054))
// CS Name: ::InstantMenuButtonTrigger*
class CORDL_TYPE InstantMenuButtonTrigger : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _vrPlatformHelper offset 0x10
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field menuButtonTriggeredEvent offset 0x18
 __declspec(property(get=__get_menuButtonTriggeredEvent, put=__set_menuButtonTriggeredEvent)) ::System::Action*  menuButtonTriggeredEvent;

/// @brief Convert operator to "::Zenject::ITickable"
constexpr operator  ::Zenject::ITickable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
constexpr operator  ::GlobalNamespace::IMenuButtonTrigger*() noexcept;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set_menuButtonTriggeredEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_menuButtonTriggeredEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_menuButtonTriggeredEvent() const;

/// @brief Method add_menuButtonTriggeredEvent addr 0x23c4088 size 0x9c virtual true final true
inline void add_menuButtonTriggeredEvent(::System::Action*  value) ;

/// @brief Method remove_menuButtonTriggeredEvent addr 0x23c4124 size 0x9c virtual true final true
inline void remove_menuButtonTriggeredEvent(::System::Action*  value) ;

/// @brief Method Tick addr 0x23c41c0 size 0xcc virtual true final true
inline void Tick() ;

static inline ::GlobalNamespace::InstantMenuButtonTrigger* New_ctor() ;

/// @brief Method .ctor addr 0x23c428c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InstantMenuButtonTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstantMenuButtonTrigger(InstantMenuButtonTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstantMenuButtonTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstantMenuButtonTrigger(InstantMenuButtonTrigger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InstantMenuButtonTrigger()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InstantMenuButtonTrigger, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InstantMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstantMenuButtonTrigger*, "", "InstantMenuButtonTrigger");
