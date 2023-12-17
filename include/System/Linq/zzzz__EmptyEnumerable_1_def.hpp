#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EmptyEnumerable_1)
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class EmptyEnumerable_1;
}
namespace System::Linq {
template<>
class EmptyEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class EmptyEnumerable_1<TElement>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::EmptyEnumerable_1);
// Type: System.Linq::EmptyEnumerable`1
// Type: System.Linq::EmptyEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14278)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14278), inst: 3113 })
// CS Name: ::System.Linq::EmptyEnumerable`1<TElement>*
class CORDL_TYPE EmptyEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Instance(::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*>  value) ;

static inline ::ArrayW<::UnityEngine::InputSystem::Utilities::NameAndParameters,::Array<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> getStaticF_Instance() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyEnumerable_1(EmptyEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyEnumerable_1(EmptyEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyEnumerable_1()  = default;
public:


// Fields

// Static field Instance


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EmptyEnumerable`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14278)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14278), inst: 2 })
// CS Name: ::System.Linq::EmptyEnumerable`1<TElement>*
class CORDL_TYPE EmptyEnumerable_1<TElement> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Instance(::ArrayW<TElement,::Array<TElement>*>  value) ;

static inline ::ArrayW<TElement,::Array<TElement>*> getStaticF_Instance() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyEnumerable_1(EmptyEnumerable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyEnumerable_1(EmptyEnumerable_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyEnumerable_1()  = default;
public:


// Fields

// Static field Instance


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EmptyEnumerable_1, "System.Linq", "EmptyEnumerable`1");
