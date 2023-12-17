#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_8)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TResult>
class Func_8;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5,::il2cpp_utils::il2cpp_reference_type T6,::il2cpp_utils::il2cpp_reference_type T7,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_8<T1,T2,T3,T4,T5,T6,T7,TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_8);
// Type: System::Func`8
// Type: System::Func`8
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5,::il2cpp_utils::il2cpp_reference_type T6,::il2cpp_utils::il2cpp_reference_type T7,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2338))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2338), inst: 6128 })
// CS Name: ::System::Func`8<T1,T2,T3,T4,T5,T6,T7,TResult>*
class CORDL_TYPE Func_8<T1,T2,T3,T4,T5,T6,T7,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_8<T1,T2,T3,T4,T5,T6,T7,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6, T7  arg7) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_8(Func_8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_8(Func_8 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_8()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_8, "System", "Func`8");
