#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SignalListener)
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class SignalListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SignalListener);
// Type: ::SignalListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14396))
// CS Name: ::SignalListener*
class CORDL_TYPE SignalListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _signal offset 0x18
 __declspec(property(get=__get__signal, put=__set__signal)) ::GlobalNamespace::Signal*  _signal;

/// @brief Field _unityEvent offset 0x20
 __declspec(property(get=__get__unityEvent, put=__set__unityEvent)) ::UnityEngine::Events::UnityEvent*  _unityEvent;

constexpr void __set__signal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__signal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__signal() const;

constexpr void __set__unityEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr ::UnityEngine::Events::UnityEvent* __get__unityEvent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> __get__unityEvent() const;

/// @brief Method OnEnable addr 0x20f57cc size 0x94 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x20f5860 size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method HandleEvent addr 0x20f58e8 size 0x1c virtual false final false
inline void HandleEvent() ;

static inline ::GlobalNamespace::SignalListener* New_ctor() ;

/// @brief Method .ctor addr 0x20f5904 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalListener(SignalListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalListener(SignalListener const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalListener()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SignalListener, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SignalListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalListener*, "", "SignalListener");
