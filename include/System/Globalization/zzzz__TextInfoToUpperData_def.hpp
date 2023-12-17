#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TextInfoToUpperData)
// Forward declare root types
namespace System::Globalization {
class TextInfoToUpperData;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TextInfoToUpperData);
// Type: System.Globalization::TextInfoToUpperData
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3718))
// CS Name: ::System.Globalization::TextInfoToUpperData*
class CORDL_TYPE TextInfoToUpperData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_range_00e0_0586(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_00e0_0586() ;

static inline void setStaticF_range_1e01_1ff3(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_1e01_1ff3() ;

static inline void setStaticF_range_2170_2184(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_2170_2184() ;

static inline void setStaticF_range_24d0_24e9(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_24d0_24e9() ;

static inline void setStaticF_range_2c30_2ce3(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_2c30_2ce3() ;

static inline void setStaticF_range_2d00_2d25(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_2d00_2d25() ;

static inline void setStaticF_range_a641_a697(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_a641_a697() ;

static inline void setStaticF_range_a723_a78c(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_a723_a78c() ;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToUpperData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextInfoToUpperData(TextInfoToUpperData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToUpperData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextInfoToUpperData(TextInfoToUpperData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextInfoToUpperData()  = default;
public:


// Fields

// Static field range_00e0_0586

// Static field range_1e01_1ff3

// Static field range_2170_2184

// Static field range_24d0_24e9

// Static field range_2c30_2ce3

// Static field range_2d00_2d25

// Static field range_a641_a697

// Static field range_a723_a78c


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TextInfoToUpperData, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::TextInfoToUpperData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfoToUpperData*, "System.Globalization", "TextInfoToUpperData");
