#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementalReadDecoder)
// Forward declare root types
namespace System::Xml {
class IncrementalReadDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IncrementalReadDecoder);
// Type: System.Xml::IncrementalReadDecoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11432))
// CS Name: ::System.Xml::IncrementalReadDecoder*
class CORDL_TYPE IncrementalReadDecoder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_IsFull)) bool  IsFull;

/// @brief Method get_IsFull addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_IsFull() ;

/// @brief Method Decode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Decode(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  startPos, int32_t  len) ;

static inline ::System::Xml::IncrementalReadDecoder* New_ctor() ;

/// @brief Method .ctor addr 0x2853ab4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDecoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IncrementalReadDecoder(IncrementalReadDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDecoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncrementalReadDecoder(IncrementalReadDecoder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IncrementalReadDecoder()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::IncrementalReadDecoder, 0x10>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::IncrementalReadDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IncrementalReadDecoder*, "System.Xml", "IncrementalReadDecoder");
