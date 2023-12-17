#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEvent_2)
namespace System {
class Type;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System {
class Object;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
class UnityEvent_2<T0,T1>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityEvent_2);
// Type: UnityEngine.Events::UnityEvent`2
// Type: UnityEngine.Events::UnityEvent`2
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10463)), TypeDefinitionIndex(TypeDefinitionIndex(10461))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10463), inst: 81 })
// CS Name: ::UnityEngine.Events::UnityEvent`2<T0,T1>*
class CORDL_TYPE UnityEvent_2<T0,T1> : public ::UnityEngine::Events::UnityEventBase {
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

static inline ::UnityEngine::Events::UnityEvent_2<T0,T1>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Reflection::MethodInfo* FindMethod_Impl(::StringW  name, ::System::Type*  targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEvent_2(UnityEvent_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEvent_2(UnityEvent_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityEvent_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityEvent_2, "UnityEngine.Events", "UnityEvent`2");
