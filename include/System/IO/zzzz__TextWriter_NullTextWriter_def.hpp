#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextWriter_NullTextWriter)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class __TextWriter__NullTextWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__TextWriter__NullTextWriter);
// Type: ::NullTextWriter
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3583))
// CS Name: ::TextWriter::NullTextWriter*
class CORDL_TYPE __TextWriter__NullTextWriter : public ::System::IO::TextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::IO::TextWriter)]{};

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

static inline ::System::IO::__TextWriter__NullTextWriter* New_ctor() ;

/// @brief Method .ctor addr 0x25079cc size 0x8c virtual false final false
inline void _ctor() ;

/// @brief Method get_Encoding addr 0x2507a58 size 0x8 virtual true final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method Write addr 0x2507a60 size 0x4 virtual true final false
inline void Write(::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write addr 0x2507a64 size 0x4 virtual true final false
inline void Write(::StringW  value) ;

/// @brief Method WriteLine addr 0x2507a68 size 0x4 virtual true final false
inline void WriteLine() ;

/// @brief Method WriteLine addr 0x2507a6c size 0x4 virtual true final false
inline void WriteLine(::StringW  value) ;

/// @brief Method Write addr 0x2507a70 size 0x4 virtual true final false
inline void Write(char16_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "__TextWriter__NullTextWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextWriter__NullTextWriter(__TextWriter__NullTextWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextWriter__NullTextWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextWriter__NullTextWriter(__TextWriter__NullTextWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextWriter__NullTextWriter()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__TextWriter__NullTextWriter, 0x30>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::__TextWriter__NullTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__TextWriter__NullTextWriter*, "System.IO", "TextWriter/NullTextWriter");
