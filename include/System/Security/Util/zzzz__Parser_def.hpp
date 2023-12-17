#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Parser)
namespace System::Security {
class SecurityDocument;
}
namespace System::Security::Util {
class Tokenizer;
}
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Util {
class TokenizerStream;
}
// Forward declare root types
namespace System::Security::Util {
class Parser;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Util::Parser);
// Type: System.Security.Util::Parser
namespace System::Security::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2891))
// CS Name: ::System.Security.Util::Parser*
class CORDL_TYPE Parser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _doc offset 0x10
 __declspec(property(get=__get__doc, put=__set__doc)) ::System::Security::SecurityDocument*  _doc;

/// @brief Field _t offset 0x18
 __declspec(property(get=__get__t, put=__set__t)) ::System::Security::Util::Tokenizer*  _t;

constexpr void __set__doc(::System::Security::SecurityDocument*  value) ;

constexpr ::System::Security::SecurityDocument* __get__doc() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::SecurityDocument*> __get__doc() const;

constexpr void __set__t(::System::Security::Util::Tokenizer*  value) ;

constexpr ::System::Security::Util::Tokenizer* __get__t() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::Tokenizer*> __get__t() const;

/// @brief Method GetTopElement addr 0x24548ac size 0x28 virtual false final false
inline ::System::Security::SecurityElement* GetTopElement() ;

/// @brief Method GetRequiredSizes addr 0x24548d4 size 0x460 virtual false final false
inline void GetRequiredSizes(::System::Security::Util::TokenizerStream*  stream, ByRef<int32_t>  index) ;

/// @brief Method DetermineFormat addr 0x2454e2c size 0x1b0 virtual false final false
inline int32_t DetermineFormat(::System::Security::Util::TokenizerStream*  stream) ;

/// @brief Method ParseContents addr 0x2455a40 size 0x308 virtual false final false
inline void ParseContents() ;

static inline ::System::Security::Util::Parser* New_ctor(::System::Security::Util::Tokenizer*  t) ;

/// @brief Method .ctor addr 0x2455e7c size 0xa4 virtual false final false
inline void _ctor(::System::Security::Util::Tokenizer*  t) ;

static inline ::System::Security::Util::Parser* New_ctor(::StringW  input) ;

/// @brief Method .ctor addr 0x2455f20 size 0x70 virtual false final false
inline void _ctor(::StringW  input) ;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Parser(Parser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Parser(Parser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Parser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::Parser, 0x20>, "Size mismatch!");

} // namespace end def System::Security::Util
NEED_NO_BOX(::System::Security::Util::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Parser*, "System.Security.Util", "Parser");
