#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityEvent_3)
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityEvent_3;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class UnityEvent_3<T0,T1,T2>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
class UnityEvent_3<T0,bool,T2>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0>
class UnityEvent_3<T0,int32_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityEvent_3);
// Type: UnityEngine.Events::UnityEvent`3
// Type: UnityEngine.Events::UnityEvent`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10461)), TypeDefinitionIndex(TypeDefinitionIndex(10467))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 7758 })
// CS Name: ::UnityEngine.Events::UnityEvent`3<T0,T1,T2>*
class CORDL_TYPE UnityEvent_3<T0,bool,T2> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_3<T0,bool,T2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_3<T0,bool,T2>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_3<T0,bool,T2>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_3<T0,bool,T2>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T0  arg0, bool  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_3(UnityEvent_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_3(UnityEvent_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10467)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 5330 })
// CS Name: ::UnityEngine.Events::UnityEvent`3<T0,T1,T2>*
class CORDL_TYPE UnityEvent_3<T0,T1,T2> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_3<T0,T1,T2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_3<T0,T1,T2>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_3<T0,T1,T2>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_3<T0,T1,T2>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T0  arg0, T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_3(UnityEvent_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_3(UnityEvent_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10467)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 5328 })
// CS Name: ::UnityEngine.Events::UnityEvent`3<T0,T1,T2>*
class CORDL_TYPE UnityEvent_3<T0,int32_t,int32_t> : public ::UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEventBase)]{};

/// @brief Field m_InvokeArray offset 0x28
 __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_InvokeArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_InvokeArray() const;

static inline ::UnityEngine::Events::UnityEvent_3<T0,int32_t,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddListener(::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*  call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RemoveListener(::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*  call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>*  action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(T0  arg0, int32_t  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_3(UnityEvent_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_3(UnityEvent_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityEvent_3, "UnityEngine.Events", "UnityEvent`3");
