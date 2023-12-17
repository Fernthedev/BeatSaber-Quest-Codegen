#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DelayedMenuButtonTrigger)
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class DelayedMenuButtonTrigger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DelayedMenuButtonTrigger);
// Type: ::DelayedMenuButtonTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5052))
// CS Name: ::DelayedMenuButtonTrigger*
class CORDL_TYPE DelayedMenuButtonTrigger : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field menuButtonTriggeredEvent offset 0x10
 __declspec(property(get=__get_menuButtonTriggeredEvent, put=__set_menuButtonTriggeredEvent)) ::System::Action*  menuButtonTriggeredEvent;

/// @brief Field _pressDuration offset 0x18
 __declspec(property(get=__get__pressDuration, put=__set__pressDuration)) float_t  _pressDuration;

/// @brief Field _timer offset 0x1c
 __declspec(property(get=__get__timer, put=__set__timer)) float_t  _timer;

/// @brief Field _waitingForButtonRelease offset 0x20
 __declspec(property(get=__get__waitingForButtonRelease, put=__set__waitingForButtonRelease)) bool  _waitingForButtonRelease;

/// @brief Field _vrPlatformHelper offset 0x28
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Convert operator to "::Zenject::ITickable"
constexpr operator  ::Zenject::ITickable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IMenuButtonTrigger"
constexpr operator  ::GlobalNamespace::IMenuButtonTrigger*() noexcept;

constexpr void __set_menuButtonTriggeredEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_menuButtonTriggeredEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_menuButtonTriggeredEvent() const;

constexpr void __set__pressDuration(float_t  value) ;

constexpr float_t& __get__pressDuration() ;

constexpr float_t const& __get__pressDuration() const;

constexpr void __set__timer(float_t  value) ;

constexpr float_t& __get__timer() ;

constexpr float_t const& __get__timer() const;

constexpr void __set__waitingForButtonRelease(bool  value) ;

constexpr bool& __get__waitingForButtonRelease() ;

constexpr bool const& __get__waitingForButtonRelease() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

/// @brief Method add_menuButtonTriggeredEvent addr 0x23c3e2c size 0x9c virtual true final true
inline void add_menuButtonTriggeredEvent(::System::Action*  value) ;

/// @brief Method remove_menuButtonTriggeredEvent addr 0x23c3ec8 size 0x9c virtual true final true
inline void remove_menuButtonTriggeredEvent(::System::Action*  value) ;

/// @brief Method Tick addr 0x23c3f64 size 0x110 virtual true final true
inline void Tick() ;

static inline ::GlobalNamespace::DelayedMenuButtonTrigger* New_ctor() ;

/// @brief Method .ctor addr 0x23c4074 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DelayedMenuButtonTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayedMenuButtonTrigger(DelayedMenuButtonTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayedMenuButtonTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayedMenuButtonTrigger(DelayedMenuButtonTrigger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DelayedMenuButtonTrigger()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DelayedMenuButtonTrigger, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DelayedMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DelayedMenuButtonTrigger*, "", "DelayedMenuButtonTrigger");
