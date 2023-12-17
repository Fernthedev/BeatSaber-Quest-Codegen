#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemName)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
class FileSystemName;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemName);
// Type: System.IO.Enumeration::FileSystemName
namespace System::IO::Enumeration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3656))
// CS Name: ::System.IO.Enumeration::FileSystemName*
class CORDL_TYPE FileSystemName : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_wildcardChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_wildcardChars() ;

static inline void setStaticF_s_simpleWildcardChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_simpleWildcardChars() ;

/// @brief Method TranslateWin32Expression addr 0x2547ebc size 0x39c virtual false final false
static inline ::StringW TranslateWin32Expression(::StringW  expression) ;

/// @brief Method MatchesWin32Expression addr 0x2548258 size 0x88 virtual false final false
static inline bool MatchesWin32Expression(::System::ReadOnlySpan_1<char16_t>  expression, ::System::ReadOnlySpan_1<char16_t>  name, bool  ignoreCase) ;

/// @brief Method MatchesSimpleExpression addr 0x2548a34 size 0x88 virtual false final false
static inline bool MatchesSimpleExpression(::System::ReadOnlySpan_1<char16_t>  expression, ::System::ReadOnlySpan_1<char16_t>  name, bool  ignoreCase) ;

/// @brief Method MatchPattern addr 0x25482e0 size 0x754 virtual false final false
static inline bool MatchPattern(::System::ReadOnlySpan_1<char16_t>  expression, ::System::ReadOnlySpan_1<char16_t>  name, bool  ignoreCase, bool  useExtendedWildcards) ;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileSystemName(FileSystemName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileSystemName(FileSystemName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FileSystemName()  = default;
public:


// Fields

// Static field s_wildcardChars

// Static field s_simpleWildcardChars


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemName, 0x10>, "Size mismatch!");

} // namespace end def System::IO::Enumeration
NEED_NO_BOX(::System::IO::Enumeration::FileSystemName);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemName*, "System.IO.Enumeration", "FileSystemName");
