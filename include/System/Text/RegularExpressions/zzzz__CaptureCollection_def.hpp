#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaptureCollection)
namespace System::Text::RegularExpressions {
class Group;
}
namespace System::Text::RegularExpressions {
class Capture;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class CaptureCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::CaptureCollection);
// Type: System.Text.RegularExpressions::CaptureCollection
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8901))
// CS Name: ::System.Text.RegularExpressions::CaptureCollection*
class CORDL_TYPE CaptureCollection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _group offset 0x10
 __declspec(property(get=__get__group, put=__set__group)) ::System::Text::RegularExpressions::Group*  _group;

/// @brief Field _capcount offset 0x18
 __declspec(property(get=__get__capcount, put=__set__capcount)) int32_t  _capcount;

/// @brief Field _captures offset 0x20
 __declspec(property(get=__get__captures, put=__set__captures)) ::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>  _captures;

constexpr void __set__group(::System::Text::RegularExpressions::Group*  value) ;

constexpr ::System::Text::RegularExpressions::Group* __get__group() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> __get__group() const;

constexpr void __set__capcount(int32_t  value) ;

constexpr int32_t& __get__capcount() ;

constexpr int32_t const& __get__capcount() const;

constexpr void __set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>  value) ;

constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>& __get__captures() ;

constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*> const& __get__captures() const;

// Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CaptureCollection(CaptureCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CaptureCollection(CaptureCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CaptureCollection()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::CaptureCollection, 0x28>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::CaptureCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::CaptureCollection*, "System.Text.RegularExpressions", "CaptureCollection");
