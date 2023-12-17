#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Singleton_1)
// Forward declare root types
namespace RootMotion {
template<typename T>
class Singleton_1;
}
namespace RootMotion {
template<::il2cpp_utils::il2cpp_reference_type T>
class Singleton_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::RootMotion::Singleton_1);
// Type: RootMotion::Singleton`1
// Type: RootMotion::Singleton`1
namespace RootMotion {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(12498))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12498), inst: 2 })
// CS Name: ::RootMotion::Singleton`1<T>*
class CORDL_TYPE Singleton_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

static inline void setStaticF_sInstance(T  value) ;

static inline T getStaticF_sInstance() ;

/// @brief Method get_instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T get_instance() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Awake() ;

static inline ::RootMotion::Singleton_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Singleton_1(Singleton_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Singleton_1(Singleton_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Singleton_1()  = default;
public:


// Fields

// Static field sInstance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RootMotion::Singleton_1, "RootMotion", "Singleton`1");
