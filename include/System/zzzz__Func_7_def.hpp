#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_7)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename TResult>
class Func_7;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5,::il2cpp_utils::il2cpp_reference_type T6,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_7<T1,T2,T3,T4,T5,T6,TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_7);
// Type: System::Func`7
// Type: System::Func`7
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5,::il2cpp_utils::il2cpp_reference_type T6,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2337))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2337), inst: 6127 })
// CS Name: ::System::Func`7<T1,T2,T3,T4,T5,T6,TResult>*
class CORDL_TYPE Func_7<T1,T2,T3,T4,T5,T6,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_7<T1,T2,T3,T4,T5,T6,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_7(Func_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_7(Func_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_7()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_7, "System", "Func`7");
