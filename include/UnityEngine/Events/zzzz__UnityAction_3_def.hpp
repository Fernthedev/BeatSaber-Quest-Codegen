#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAction_3)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityAction_3;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class UnityAction_3<T0,T1,T2>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
class UnityAction_3<T0,bool,T2>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0>
class UnityAction_3<T0,int32_t,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_3);
// Type: UnityEngine.Events::UnityAction`3
// Type: UnityEngine.Events::UnityAction`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10466)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10466), inst: 7758 })
// CS Name: ::UnityEngine.Events::UnityAction`3<T0,T1,T2>*
class CORDL_TYPE UnityAction_3<T0,bool,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_3<T0,bool,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0, bool  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_3(UnityAction_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_3(UnityAction_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10466)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10466), inst: 5330 })
// CS Name: ::UnityEngine.Events::UnityAction`3<T0,T1,T2>*
class CORDL_TYPE UnityAction_3<T0,T1,T2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_3<T0,T1,T2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0, T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_3(UnityAction_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_3(UnityAction_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`3
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10466)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10466), inst: 5328 })
// CS Name: ::UnityEngine.Events::UnityAction`3<T0,T1,T2>*
class CORDL_TYPE UnityAction_3<T0,int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_3<T0,int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0, int32_t  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_3(UnityAction_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_3(UnityAction_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_3, "UnityEngine.Events", "UnityAction`3");
