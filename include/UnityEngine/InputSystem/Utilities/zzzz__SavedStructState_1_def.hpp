#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SavedStructState_1)
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__GlobalState;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class __SavedStructState_1__TypedRestore;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::Users {
struct __InputUser__GlobalState;
}
namespace UnityEngine::InputSystem {
struct __InputActionState__GlobalState;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class SavedStructState_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class __SavedStructState_1__TypedRestore;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class SavedStructState_1<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class SavedStructState_1<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class SavedStructState_1<::UnityEngine::InputSystem::__InputActionState__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class __SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class __SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class __SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SavedStructState_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore);
// Type: ::TypedRestore
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
// Type: ::TypedRestore
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6704)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6704), inst: 5213 })
// CS Name: ::SavedStructState`1::TypedRestore<T>*
class CORDL_TYPE __SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SavedStructState_1__TypedRestore()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::TypedRestore
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6704)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6704), inst: 5212 })
// CS Name: ::SavedStructState`1::TypedRestore<T>*
class CORDL_TYPE __SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>  state) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>  state, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SavedStructState_1__TypedRestore()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::TypedRestore
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(6704))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6704), inst: 5211 })
// CS Name: ::SavedStructState`1::TypedRestore<T>*
class CORDL_TYPE __SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>  state) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>  state, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SavedStructState_1__TypedRestore()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6705))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6705), inst: 5213 })
// CS Name: ::UnityEngine.InputSystem.Utilities::SavedStructState`1<T>*
class CORDL_TYPE SavedStructState_1<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState> : public ::System::Object {
public:
// Declarations
using TypedRestore = ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x170};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x170 - sizeof(::System::Object)]{};

/// @brief Field m_State offset 0x10
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState  m_State;

/// @brief Field m_RestoreAction offset 0x160
 __declspec(property(get=__get_m_RestoreAction, put=__set_m_RestoreAction)) ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*  m_RestoreAction;

/// @brief Field m_StaticDisposeCurrentState offset 0x168
 __declspec(property(get=__get_m_StaticDisposeCurrentState, put=__set_m_StaticDisposeCurrentState)) ::System::Action*  m_StaticDisposeCurrentState;

/// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
constexpr operator  ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept;

constexpr void __set_m_State(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState  value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState& __get_m_State() ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState const& __get_m_State() const;

constexpr void __set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* __get_m_RestoreAction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*> __get_m_RestoreAction() const;

constexpr void __set_m_StaticDisposeCurrentState(::System::Action*  value) ;

constexpr ::System::Action* __get_m_StaticDisposeCurrentState() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_StaticDisposeCurrentState() const;

static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* New_ctor(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*  restoreAction, ::System::Action*  staticDisposeCurrentState) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*  restoreAction, ::System::Action*  staticDisposeCurrentState) ;

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final true
inline void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RestoreSavedState() ;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavedStructState_1(SavedStructState_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavedStructState_1(SavedStructState_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SavedStructState_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6705))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6705), inst: 5212 })
// CS Name: ::UnityEngine.InputSystem.Utilities::SavedStructState`1<T>*
class CORDL_TYPE SavedStructState_1<::UnityEngine::InputSystem::Users::__InputUser__GlobalState> : public ::System::Object {
public:
// Declarations
using TypedRestore = ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x188};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x188 - sizeof(::System::Object)]{};

/// @brief Field m_State offset 0x10
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::Users::__InputUser__GlobalState  m_State;

/// @brief Field m_RestoreAction offset 0x178
 __declspec(property(get=__get_m_RestoreAction, put=__set_m_RestoreAction)) ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*  m_RestoreAction;

/// @brief Field m_StaticDisposeCurrentState offset 0x180
 __declspec(property(get=__get_m_StaticDisposeCurrentState, put=__set_m_StaticDisposeCurrentState)) ::System::Action*  m_StaticDisposeCurrentState;

/// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
constexpr operator  ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept;

constexpr void __set_m_State(::UnityEngine::InputSystem::Users::__InputUser__GlobalState  value) ;

constexpr ::UnityEngine::InputSystem::Users::__InputUser__GlobalState& __get_m_State() ;

constexpr ::UnityEngine::InputSystem::Users::__InputUser__GlobalState const& __get_m_State() const;

constexpr void __set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* __get_m_RestoreAction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*> __get_m_RestoreAction() const;

constexpr void __set_m_StaticDisposeCurrentState(::System::Action*  value) ;

constexpr ::System::Action* __get_m_StaticDisposeCurrentState() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_StaticDisposeCurrentState() const;

static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>* New_ctor(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>  state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*  restoreAction, ::System::Action*  staticDisposeCurrentState) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>  state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::Users::__InputUser__GlobalState>*  restoreAction, ::System::Action*  staticDisposeCurrentState) ;

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final true
inline void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RestoreSavedState() ;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavedStructState_1(SavedStructState_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavedStructState_1(SavedStructState_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SavedStructState_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6705))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6705), inst: 5211 })
// CS Name: ::UnityEngine.InputSystem.Utilities::SavedStructState`1<T>*
class CORDL_TYPE SavedStructState_1<::UnityEngine::InputSystem::__InputActionState__GlobalState> : public ::System::Object {
public:
// Declarations
using TypedRestore = ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd8 - sizeof(::System::Object)]{};

/// @brief Field m_State offset 0x10
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::InputSystem::__InputActionState__GlobalState  m_State;

/// @brief Field m_RestoreAction offset 0xc8
 __declspec(property(get=__get_m_RestoreAction, put=__set_m_RestoreAction)) ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*  m_RestoreAction;

/// @brief Field m_StaticDisposeCurrentState offset 0xd0
 __declspec(property(get=__get_m_StaticDisposeCurrentState, put=__set_m_StaticDisposeCurrentState)) ::System::Action*  m_StaticDisposeCurrentState;

/// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
constexpr operator  ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept;

constexpr void __set_m_State(::UnityEngine::InputSystem::__InputActionState__GlobalState  value) ;

constexpr ::UnityEngine::InputSystem::__InputActionState__GlobalState& __get_m_State() ;

constexpr ::UnityEngine::InputSystem::__InputActionState__GlobalState const& __get_m_State() const;

constexpr void __set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>* __get_m_RestoreAction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*> __get_m_RestoreAction() const;

constexpr void __set_m_StaticDisposeCurrentState(::System::Action*  value) ;

constexpr ::System::Action* __get_m_StaticDisposeCurrentState() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_StaticDisposeCurrentState() const;

static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<::UnityEngine::InputSystem::__InputActionState__GlobalState>* New_ctor(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>  state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*  restoreAction, ::System::Action*  staticDisposeCurrentState) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(ByRef<::UnityEngine::InputSystem::__InputActionState__GlobalState>  state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::__InputActionState__GlobalState>*  restoreAction, ::System::Action*  staticDisposeCurrentState) ;

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final true
inline void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final true
inline void RestoreSavedState() ;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SavedStructState_1(SavedStructState_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SavedStructState_1(SavedStructState_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SavedStructState_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SavedStructState_1, "UnityEngine.InputSystem.Utilities", "SavedStructState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore, "UnityEngine.InputSystem.Utilities", "SavedStructState`1/TypedRestore");
