#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(InvokableCall_4)
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityAction_4;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1,typename T2,typename T3,typename T4>
class InvokableCall_4;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
class InvokableCall_4<T1,T2,T3,T4>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::InvokableCall_4);
// Type: UnityEngine.Events::InvokableCall`4
// Type: UnityEngine.Events::InvokableCall`4
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10455)), TypeDefinitionIndex(TypeDefinitionIndex(10450))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10455), inst: 6124 })
// CS Name: ::UnityEngine.Events::InvokableCall`4<T1,T2,T3,T4>*
class CORDL_TYPE InvokableCall_4<T1,T2,T3,T4> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Events::BaseInvokableCall)]{};

/// @brief Field Delegate offset 0x10
 __declspec(property(get=__get_Delegate, put=__set_Delegate)) ::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>* __get_Delegate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_4<T1,T2,T3,T4>*> __get_Delegate() const;

static inline ::UnityEngine::Events::InvokableCall_4<T1,T2,T3,T4>* New_ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  target, ::System::Reflection::MethodInfo*  theFunction) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Find(::System::Object*  targetObj, ::System::Reflection::MethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvokableCall_4(InvokableCall_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvokableCall_4(InvokableCall_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvokableCall_4()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
