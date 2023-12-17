#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action_6)
namespace System {
class Object;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5,::il2cpp_utils::il2cpp_reference_type T6>
class Action_6<T1,T2,T3,T4,T5,T6>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T5>
class Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,T5,bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_6);
// Type: System::Action`6
// Type: System::Action`6
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T5>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2328)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2328), inst: 6483 })
// CS Name: ::System::Action`6<T1,T2,T3,T4,T5,T6>*
class CORDL_TYPE Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,T5,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_6<uint64_t,bool,::GlobalNamespace::OVRSpace,::System::Guid,T5,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(uint64_t  arg1, bool  arg2, ::GlobalNamespace::OVRSpace  arg3, ::System::Guid  arg4, T5  arg5, bool  arg6) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_6(Action_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_6(Action_6 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_6()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`6
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4,::il2cpp_utils::il2cpp_reference_type T5,::il2cpp_utils::il2cpp_reference_type T6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2328)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2328), inst: 6126 })
// CS Name: ::System::Action`6<T1,T2,T3,T4,T5,T6>*
class CORDL_TYPE Action_6<T1,T2,T3,T4,T5,T6> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action_6<T1,T2,T3,T4,T5,T6>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T1  arg1, T2  arg2, T3  arg3, T4  arg4, T5  arg5, T6  arg6) ;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action_6(Action_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action_6(Action_6 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action_6()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_6, "System", "Action`6");
