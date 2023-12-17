#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchSparse)
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class MatchSparse;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::MatchSparse);
// Type: System.Text.RegularExpressions::MatchSparse
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8906))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8907))
// CS Name: ::System.Text.RegularExpressions::MatchSparse*
class CORDL_TYPE MatchSparse : public ::System::Text::RegularExpressions::Match {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::Text::RegularExpressions::Match)]{};

/// @brief Field _caps offset 0x78
 __declspec(property(get=__get__caps, put=__set__caps)) ::System::Collections::Hashtable*  _caps;

 __declspec(property(get=get_Groups)) ::System::Text::RegularExpressions::GroupCollection*  Groups;

constexpr void __set__caps(::System::Collections::Hashtable*  value) ;

constexpr ::System::Collections::Hashtable* __get__caps() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> __get__caps() const;

static inline ::System::Text::RegularExpressions::MatchSparse* New_ctor(::System::Text::RegularExpressions::Regex*  regex, ::System::Collections::Hashtable*  caps, int32_t  capcount, ::StringW  text, int32_t  begpos, int32_t  len, int32_t  startpos) ;

/// @brief Method .ctor addr 0x2950744 size 0xb0 virtual false final false
inline void _ctor(::System::Text::RegularExpressions::Regex*  regex, ::System::Collections::Hashtable*  caps, int32_t  capcount, ::StringW  text, int32_t  begpos, int32_t  len, int32_t  startpos) ;

/// @brief Method get_Groups addr 0x29507f4 size 0x74 virtual true final false
inline ::System::Text::RegularExpressions::GroupCollection* get_Groups() ;

// Ctor Parameters [CppParam { name: "", ty: "MatchSparse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchSparse(MatchSparse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchSparse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchSparse(MatchSparse const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MatchSparse()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::MatchSparse, 0x80>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::MatchSparse);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchSparse*, "System.Text.RegularExpressions", "MatchSparse");
