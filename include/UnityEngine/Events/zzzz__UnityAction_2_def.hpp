#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAction_2)
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityAction_2;
}
namespace UnityEngine::Events {
template<>
class UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>;
}
namespace UnityEngine::Events {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class UnityAction_2<::UnityEngine::SceneManagement::Scene,T1>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
class UnityAction_2<T0,T1>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_2);
// Type: UnityEngine.Events::UnityAction`2
// Type: UnityEngine.Events::UnityAction`2
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10462)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10462), inst: 7799 })
// CS Name: ::UnityEngine.Events::UnityAction`2<T0,T1>*
class CORDL_TYPE UnityAction_2<::UnityEngine::SceneManagement::Scene,T1> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,T1>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::SceneManagement::Scene  arg0, T1  arg1) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_2(UnityAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_2(UnityAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`2
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10462))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10462), inst: 5230 })
// CS Name: ::UnityEngine.Events::UnityAction`2<T0,T1>*
class CORDL_TYPE UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_2<::UnityEngine::SceneManagement::Scene,::UnityEngine::SceneManagement::Scene>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::SceneManagement::Scene  arg0, ::UnityEngine::SceneManagement::Scene  arg1) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_2(UnityAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_2(UnityAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`2
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0,::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10462)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10462), inst: 81 })
// CS Name: ::UnityEngine.Events::UnityAction`2<T0,T1>*
class CORDL_TYPE UnityAction_2<T0,T1> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_2<T0,T1>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0, T1  arg1) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_2(UnityAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_2(UnityAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_2, "UnityEngine.Events", "UnityAction`2");
