#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAction_4)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2,typename T3>
class UnityAction_4;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
class UnityAction_4<T0,T1,T2,T3>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_4);
// Type: UnityEngine.Events::UnityAction`4
// Type: UnityEngine.Events::UnityAction`4
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10468))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10468), inst: 6124 })
// CS Name: ::UnityEngine.Events::UnityAction`4<T0,T1,T2,T3>*
class CORDL_TYPE UnityAction_4<T0,T1,T2,T3> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_4<T0,T1,T2,T3>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0, T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_4(UnityAction_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_4(UnityAction_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_4, "UnityEngine.Events", "UnityAction`4");
