#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tween)
namespace System {
class Action;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace Tweening {
class Tween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::Tween);
// Type: Tweening::Tween
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16098))
// CS Name: ::Tweening::Tween*
class CORDL_TYPE Tween : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field kEpsilon offset 0x0
static constexpr float_t  kEpsilon{0.001};

/// @brief Field onStart offset 0x10
 __declspec(property(get=__get_onStart, put=__set_onStart)) ::System::Action*  onStart;

/// @brief Field onCompleted offset 0x18
 __declspec(property(get=__get_onCompleted, put=__set_onCompleted)) ::System::Action*  onCompleted;

/// @brief Field onKilled offset 0x20
 __declspec(property(get=__get_onKilled, put=__set_onKilled)) ::System::Action*  onKilled;

/// @brief Field _progress offset 0x28
 __declspec(property(get=__get__progress, put=__set__progress)) float_t  _progress;

/// @brief Field _startTime offset 0x2c
 __declspec(property(get=__get__startTime, put=__set__startTime)) float_t  _startTime;

/// @brief Field _duration offset 0x30
 __declspec(property(get=__get__duration, put=__set__duration)) float_t  _duration;

/// @brief Field _loop offset 0x34
 __declspec(property(get=__get__loop, put=__set__loop)) bool  _loop;

/// @brief Field _delay offset 0x38
 __declspec(property(get=__get__delay, put=__set__delay)) float_t  _delay;

/// @brief Field _isStarted offset 0x3c
 __declspec(property(get=__get__isStarted, put=__set__isStarted)) bool  _isStarted;

/// @brief Field _isKilled offset 0x3d
 __declspec(property(get=__get__isKilled, put=__set__isKilled)) bool  _isKilled;

/// @brief Field _easeType offset 0x40
 __declspec(property(get=__get__easeType, put=__set__easeType)) ::GlobalNamespace::EaseType  _easeType;

 __declspec(property(get=get_isStarted)) bool  isStarted;

 __declspec(property(get=get_isActive)) bool  isActive;

 __declspec(property(get=get_isComplete)) bool  isComplete;

 __declspec(property(get=get_isKilled)) bool  isKilled;

 __declspec(property(get=get_progress)) float_t  progress;

 __declspec(property(get=get_startTime)) float_t  startTime;

 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_delay, put=set_delay)) float_t  delay;

 __declspec(property(get=get_easeType, put=set_easeType)) ::GlobalNamespace::EaseType  easeType;

constexpr void __set_onStart(::System::Action*  value) ;

constexpr ::System::Action* __get_onStart() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onStart() const;

constexpr void __set_onCompleted(::System::Action*  value) ;

constexpr ::System::Action* __get_onCompleted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onCompleted() const;

constexpr void __set_onKilled(::System::Action*  value) ;

constexpr ::System::Action* __get_onKilled() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onKilled() const;

constexpr void __set__progress(float_t  value) ;

constexpr float_t& __get__progress() ;

constexpr float_t const& __get__progress() const;

constexpr void __set__startTime(float_t  value) ;

constexpr float_t& __get__startTime() ;

constexpr float_t const& __get__startTime() const;

constexpr void __set__duration(float_t  value) ;

constexpr float_t& __get__duration() ;

constexpr float_t const& __get__duration() const;

constexpr void __set__loop(bool  value) ;

constexpr bool& __get__loop() ;

constexpr bool const& __get__loop() const;

constexpr void __set__delay(float_t  value) ;

constexpr float_t& __get__delay() ;

constexpr float_t const& __get__delay() const;

constexpr void __set__isStarted(bool  value) ;

constexpr bool& __get__isStarted() ;

constexpr bool const& __get__isStarted() const;

constexpr void __set__isKilled(bool  value) ;

constexpr bool& __get__isKilled() ;

constexpr bool const& __get__isKilled() const;

constexpr void __set__easeType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__easeType() ;

constexpr ::GlobalNamespace::EaseType const& __get__easeType() const;

/// @brief Method get_isStarted addr 0x2a0e560 size 0x8 virtual false final false
inline bool get_isStarted() ;

/// @brief Method get_isActive addr 0x2a0e568 size 0x30 virtual false final false
inline bool get_isActive() ;

/// @brief Method get_isComplete addr 0x2a0e598 size 0x14 virtual false final false
inline bool get_isComplete() ;

/// @brief Method get_isKilled addr 0x2a0e5ac size 0x8 virtual false final false
inline bool get_isKilled() ;

/// @brief Method get_progress addr 0x2a0e5b4 size 0x8 virtual false final false
inline float_t get_progress() ;

/// @brief Method get_startTime addr 0x2a0e5bc size 0x8 virtual false final false
inline float_t get_startTime() ;

/// @brief Method get_duration addr 0x2a0e5c4 size 0x8 virtual false final false
inline float_t get_duration() ;

/// @brief Method set_duration addr 0x2a0e5cc size 0x8 virtual false final false
inline void set_duration(float_t  value) ;

/// @brief Method get_loop addr 0x2a0e5d4 size 0x8 virtual false final false
inline bool get_loop() ;

/// @brief Method set_loop addr 0x2a0e5dc size 0xc virtual false final false
inline void set_loop(bool  value) ;

/// @brief Method get_delay addr 0x2a0e5e8 size 0x8 virtual false final false
inline float_t get_delay() ;

/// @brief Method set_delay addr 0x2a0e5f0 size 0x8 virtual false final false
inline void set_delay(float_t  value) ;

/// @brief Method get_easeType addr 0x2a0e5f8 size 0x8 virtual false final false
inline ::GlobalNamespace::EaseType get_easeType() ;

/// @brief Method set_easeType addr 0x2a0e600 size 0x8 virtual false final false
inline void set_easeType(::GlobalNamespace::EaseType  value) ;

/// @brief Method Kill addr 0x2a0e608 size 0xc virtual false final false
inline void Kill() ;

/// @brief Method Restart addr 0x2a0e614 size 0x10 virtual false final false
inline void Restart(float_t  startTime) ;

/// @brief Method Resume addr 0x2a0e624 size 0x8 virtual false final false
inline void Resume() ;

/// @brief Method SetStartTimeAndEndTime addr 0x2a0e62c size 0xc virtual false final false
inline void SetStartTimeAndEndTime(float_t  startTime, float_t  endTime) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(float_t  currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Sample(float_t  t) ;

static inline ::Tweening::Tween* New_ctor() ;

/// @brief Method .ctor addr 0x2a0e638 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween(Tween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween(Tween const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tween()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::Tween, 0x48>, "Size mismatch!");

} // namespace end def Tweening
NEED_NO_BOX(::Tweening::Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Tween*, "Tweening", "Tween");
