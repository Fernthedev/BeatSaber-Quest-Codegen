#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvokableCall_3)
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1,typename T2,typename T3>
class InvokableCall_3;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
class InvokableCall_3<T1,T2,T3>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
class InvokableCall_3<T1,bool,T3>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T1>
class InvokableCall_3<T1,int32_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::InvokableCall_3);
// Type: UnityEngine.Events::InvokableCall`3
// Type: UnityEngine.Events::InvokableCall`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10454)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10454), inst: 7758 })
// CS Name: ::UnityEngine.Events::InvokableCall`3<T1,T2,T3>*
class CORDL_TYPE InvokableCall_3<T1,bool,T3> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_3<T1,bool,T3>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1,bool,T3>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,bool,T3>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,bool,T3>* New_ctor(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_3<T1,bool,T3>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T1  args0, bool  args1, T3  args2) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_3(InvokableCall_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_3(InvokableCall_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10450)), TypeDefinitionIndex(TypeDefinitionIndex(10454))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10454), inst: 5330 })
// CS Name: ::UnityEngine.Events::InvokableCall`3<T1,T2,T3>*
class CORDL_TYPE InvokableCall_3<T1,T2,T3> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_3<T1,T2,T3>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1,T2,T3>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,T2,T3>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,T2,T3>* New_ctor(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_3<T1,T2,T3>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T1  args0, T2  args1, T3  args2) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_3(InvokableCall_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_3(InvokableCall_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10454)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10454), inst: 5328 })
// CS Name: ::UnityEngine.Events::InvokableCall`3<T1,T2,T3>*
class CORDL_TYPE InvokableCall_3<T1,int32_t,int32_t> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*> __get_Delegate() const;

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Delegate(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Delegate(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  value) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

static inline ::UnityEngine::Events::InvokableCall_3<T1,int32_t,int32_t>* New_ctor(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_3<T1,int32_t,int32_t>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T1  args0, int32_t  args1, int32_t  args2) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_3(InvokableCall_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_3(InvokableCall_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_3, "UnityEngine.Events", "InvokableCall`3");
