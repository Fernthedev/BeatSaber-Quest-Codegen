#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InvokableCall_1)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System {
class Object;
}
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1>
class InvokableCall_1;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::UnityEngine::Color>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::Events {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class InvokableCall_1<T1>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T1>
class InvokableCall_1<T1>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<bool>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::InvokableCall_1);
// Type: UnityEngine.Events::InvokableCall`1
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 974 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<T1> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<T1>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<T1>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T1>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<T1>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<T1>* New_ctor(::UnityEngine::Events::UnityAction_1<T1>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<T1>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10450)), TypeDefinitionIndex(TypeDefinitionIndex(10452))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 424 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* New_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::InputSystem::__InputAction__CallbackContext  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 411 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<::UnityEngine::Vector2> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Vector2>* New_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::Vector2  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 391 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<float_t> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<float_t>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<float_t>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<float_t>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<float_t>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<float_t>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<float_t>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<float_t>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<float_t>* New_ctor(::UnityEngine::Events::UnityAction_1<float_t>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<float_t>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(float_t  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10450)), TypeDefinitionIndex(TypeDefinitionIndex(10452))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 293 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<::UnityEngine::Color> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<::UnityEngine::Color>* New_ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::Color  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 105 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<bool> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<bool>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<bool>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<bool>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<bool>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<bool>* New_ctor(::UnityEngine::Events::UnityAction_1<bool>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<bool>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10452)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 98 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<int32_t> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<int32_t>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<int32_t>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<int32_t>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<int32_t>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<int32_t>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<int32_t>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<int32_t>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<int32_t>* New_ctor(::UnityEngine::Events::UnityAction_1<int32_t>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<int32_t>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10450)), TypeDefinitionIndex(TypeDefinitionIndex(10452))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10452), inst: 2 })
// CS Name: ::UnityEngine.Events::InvokableCall`1<T1>*
class CORDL_TYPE InvokableCall_1<T1> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_1<T1>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<T1>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T1>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_1<T1>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_1<T1>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_1<T1>* New_ctor(::UnityEngine::Events::UnityAction_1<T1>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<T1>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_1(InvokableCall_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_1(InvokableCall_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_1, "UnityEngine.Events", "InvokableCall`1");
