#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TextInfoToLowerData)
// Forward declare root types
namespace System::Globalization {
class TextInfoToLowerData;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TextInfoToLowerData);
// Type: System.Globalization::TextInfoToLowerData
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3719))
// CS Name: ::System.Globalization::TextInfoToLowerData*
class CORDL_TYPE TextInfoToLowerData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_range_00c0_0556(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_00c0_0556() ;

static inline void setStaticF_range_10a0_10c5(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_10a0_10c5() ;

static inline void setStaticF_range_1e00_1ffc(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_1e00_1ffc() ;

static inline void setStaticF_range_2160_216f(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_2160_216f() ;

static inline void setStaticF_range_24b6_24cf(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_24b6_24cf() ;

static inline void setStaticF_range_2c00_2c2e(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_2c00_2c2e() ;

static inline void setStaticF_range_2c60_2ce2(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_2c60_2ce2() ;

static inline void setStaticF_range_a640_a696(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_a640_a696() ;

static inline void setStaticF_range_a722_a78b(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_range_a722_a78b() ;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToLowerData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextInfoToLowerData(TextInfoToLowerData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextInfoToLowerData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextInfoToLowerData(TextInfoToLowerData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextInfoToLowerData()  = default;
public:


// Fields

// Static field range_00c0_0556

// Static field range_10a0_10c5

// Static field range_1e00_1ffc

// Static field range_2160_216f

// Static field range_24b6_24cf

// Static field range_2c00_2c2e

// Static field range_2c60_2ce2

// Static field range_a640_a696

// Static field range_a722_a78b


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TextInfoToLowerData, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::TextInfoToLowerData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfoToLowerData*, "System.Globalization", "TextInfoToLowerData");
