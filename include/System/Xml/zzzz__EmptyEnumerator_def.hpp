#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyEnumerator)
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Xml {
class EmptyEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::EmptyEnumerator);
// Type: System.Xml::EmptyEnumerator
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11530))
// CS Name: ::System.Xml::EmptyEnumerator*
class CORDL_TYPE EmptyEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x2892350 size 0x8 virtual true final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2892358 size 0x4 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x289235c size 0x60 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

static inline ::System::Xml::EmptyEnumerator* New_ctor() ;

/// @brief Method .ctor addr 0x28923bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyEnumerator(EmptyEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyEnumerator(EmptyEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyEnumerator()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::EmptyEnumerator, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::EmptyEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::EmptyEnumerator*, "System.Xml", "EmptyEnumerator");
