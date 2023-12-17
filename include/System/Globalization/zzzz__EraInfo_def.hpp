#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EraInfo)
// Forward declare root types
namespace System::Globalization {
class EraInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::EraInfo);
// Type: System.Globalization::EraInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3699))
// CS Name: ::System.Globalization::EraInfo*
class CORDL_TYPE EraInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field era offset 0x10
 __declspec(property(get=__get_era, put=__set_era)) int32_t  era;

/// @brief Field ticks offset 0x18
 __declspec(property(get=__get_ticks, put=__set_ticks)) int64_t  ticks;

/// @brief Field yearOffset offset 0x20
 __declspec(property(get=__get_yearOffset, put=__set_yearOffset)) int32_t  yearOffset;

/// @brief Field minEraYear offset 0x24
 __declspec(property(get=__get_minEraYear, put=__set_minEraYear)) int32_t  minEraYear;

/// @brief Field maxEraYear offset 0x28
 __declspec(property(get=__get_maxEraYear, put=__set_maxEraYear)) int32_t  maxEraYear;

/// @brief Field eraName offset 0x30
 __declspec(property(get=__get_eraName, put=__set_eraName)) ::StringW  eraName;

/// @brief Field abbrevEraName offset 0x38
 __declspec(property(get=__get_abbrevEraName, put=__set_abbrevEraName)) ::StringW  abbrevEraName;

/// @brief Field englishEraName offset 0x40
 __declspec(property(get=__get_englishEraName, put=__set_englishEraName)) ::StringW  englishEraName;

constexpr void __set_era(int32_t  value) ;

constexpr int32_t& __get_era() ;

constexpr int32_t const& __get_era() const;

constexpr void __set_ticks(int64_t  value) ;

constexpr int64_t& __get_ticks() ;

constexpr int64_t const& __get_ticks() const;

constexpr void __set_yearOffset(int32_t  value) ;

constexpr int32_t& __get_yearOffset() ;

constexpr int32_t const& __get_yearOffset() const;

constexpr void __set_minEraYear(int32_t  value) ;

constexpr int32_t& __get_minEraYear() ;

constexpr int32_t const& __get_minEraYear() const;

constexpr void __set_maxEraYear(int32_t  value) ;

constexpr int32_t& __get_maxEraYear() ;

constexpr int32_t const& __get_maxEraYear() const;

constexpr void __set_eraName(::StringW  value) ;

constexpr ::StringW& __get_eraName() ;

constexpr ::StringW const& __get_eraName() const;

constexpr void __set_abbrevEraName(::StringW  value) ;

constexpr ::StringW& __get_abbrevEraName() ;

constexpr ::StringW const& __get_abbrevEraName() const;

constexpr void __set_englishEraName(::StringW  value) ;

constexpr ::StringW& __get_englishEraName() ;

constexpr ::StringW const& __get_englishEraName() const;

static inline ::System::Globalization::EraInfo* New_ctor(int32_t  era, int32_t  startYear, int32_t  startMonth, int32_t  startDay, int32_t  yearOffset, int32_t  minEraYear, int32_t  maxEraYear) ;

/// @brief Method .ctor addr 0x256274c size 0x9c virtual false final false
inline void _ctor(int32_t  era, int32_t  startYear, int32_t  startMonth, int32_t  startDay, int32_t  yearOffset, int32_t  minEraYear, int32_t  maxEraYear) ;

static inline ::System::Globalization::EraInfo* New_ctor(int32_t  era, int32_t  startYear, int32_t  startMonth, int32_t  startDay, int32_t  yearOffset, int32_t  minEraYear, int32_t  maxEraYear, ::StringW  eraName, ::StringW  abbrevEraName, ::StringW  englishEraName) ;

/// @brief Method .ctor addr 0x25627e8 size 0xb4 virtual false final false
inline void _ctor(int32_t  era, int32_t  startYear, int32_t  startMonth, int32_t  startDay, int32_t  yearOffset, int32_t  minEraYear, int32_t  maxEraYear, ::StringW  eraName, ::StringW  abbrevEraName, ::StringW  englishEraName) ;

// Ctor Parameters [CppParam { name: "", ty: "EraInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EraInfo(EraInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EraInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EraInfo(EraInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EraInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::EraInfo, 0x48>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::EraInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::EraInfo*, "System.Globalization", "EraInfo");
