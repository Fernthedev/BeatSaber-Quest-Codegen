#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Group)
namespace System::Text::RegularExpressions {
class CaptureCollection;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Group;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::Group);
// Type: System.Text.RegularExpressions::Group
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8900))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8903))
// CS Name: ::System.Text.RegularExpressions::Group*
class CORDL_TYPE Group : public ::System::Text::RegularExpressions::Capture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Text::RegularExpressions::Capture)]{};

/// @brief Field _caps offset 0x20
 __declspec(property(get=__get__caps, put=__set__caps)) ::ArrayW<int32_t,::Array<int32_t>*>  _caps;

/// @brief Field _capcount offset 0x28
 __declspec(property(get=__get__capcount, put=__set__capcount)) int32_t  _capcount;

/// @brief Field _capcoll offset 0x30
 __declspec(property(get=__get__capcoll, put=__set__capcoll)) ::System::Text::RegularExpressions::CaptureCollection*  _capcoll;

/// @brief Field <Name>k__BackingField offset 0x38
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

 __declspec(property(get=get_Success)) bool  Success;

static inline void setStaticF_s_emptyGroup(::System::Text::RegularExpressions::Group*  value) ;

static inline ::System::Text::RegularExpressions::Group* getStaticF_s_emptyGroup() ;

constexpr void __set__caps(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__caps() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__caps() const;

constexpr void __set__capcount(int32_t  value) ;

constexpr int32_t& __get__capcount() ;

constexpr int32_t const& __get__capcount() const;

constexpr void __set__capcoll(::System::Text::RegularExpressions::CaptureCollection*  value) ;

constexpr ::System::Text::RegularExpressions::CaptureCollection* __get__capcoll() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::CaptureCollection*> __get__capcoll() const;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

static inline ::System::Text::RegularExpressions::Group* New_ctor(::StringW  text, ::ArrayW<int32_t,::Array<int32_t>*>  caps, int32_t  capcount, ::StringW  name) ;

/// @brief Method .ctor addr 0x294e534 size 0x9c virtual false final false
inline void _ctor(::StringW  text, ::ArrayW<int32_t,::Array<int32_t>*>  caps, int32_t  capcount, ::StringW  name) ;

/// @brief Method get_Success addr 0x294e5d0 size 0x10 virtual false final false
inline bool get_Success() ;

static inline ::System::Text::RegularExpressions::Group* New_ctor() ;

/// @brief Method .ctor addr 0x294e6dc size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Group(Group && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Group(Group const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Group()  = default;
public:


// Fields

// Static field s_emptyGroup


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Group, 0x40>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Group);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Group*, "System.Text.RegularExpressions", "Group");
