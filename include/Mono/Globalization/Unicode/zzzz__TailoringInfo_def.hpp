#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TailoringInfo)
// Forward declare root types
namespace Mono::Globalization::Unicode {
class TailoringInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::TailoringInfo);
// Type: Mono.Globalization.Unicode::TailoringInfo
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2259))
// CS Name: ::Mono.Globalization.Unicode::TailoringInfo*
class CORDL_TYPE TailoringInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field LCID offset 0x10
 __declspec(property(get=__get_LCID, put=__set_LCID)) int32_t  LCID;

/// @brief Field TailoringIndex offset 0x14
 __declspec(property(get=__get_TailoringIndex, put=__set_TailoringIndex)) int32_t  TailoringIndex;

/// @brief Field TailoringCount offset 0x18
 __declspec(property(get=__get_TailoringCount, put=__set_TailoringCount)) int32_t  TailoringCount;

/// @brief Field FrenchSort offset 0x1c
 __declspec(property(get=__get_FrenchSort, put=__set_FrenchSort)) bool  FrenchSort;

constexpr void __set_LCID(int32_t  value) ;

constexpr int32_t& __get_LCID() ;

constexpr int32_t const& __get_LCID() const;

constexpr void __set_TailoringIndex(int32_t  value) ;

constexpr int32_t& __get_TailoringIndex() ;

constexpr int32_t const& __get_TailoringIndex() const;

constexpr void __set_TailoringCount(int32_t  value) ;

constexpr int32_t& __get_TailoringCount() ;

constexpr int32_t const& __get_TailoringCount() const;

constexpr void __set_FrenchSort(bool  value) ;

constexpr bool& __get_FrenchSort() ;

constexpr bool const& __get_FrenchSort() const;

static inline ::Mono::Globalization::Unicode::TailoringInfo* New_ctor(int32_t  lcid, int32_t  tailoringIndex, int32_t  tailoringCount, bool  frenchSort) ;

/// @brief Method .ctor addr 0x241553c size 0x44 virtual false final false
inline void _ctor(int32_t  lcid, int32_t  tailoringIndex, int32_t  tailoringCount, bool  frenchSort) ;

// Ctor Parameters [CppParam { name: "", ty: "TailoringInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TailoringInfo(TailoringInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TailoringInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TailoringInfo(TailoringInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TailoringInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::TailoringInfo, 0x20>, "Size mismatch!");

} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::TailoringInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::TailoringInfo*, "Mono.Globalization.Unicode", "TailoringInfo");
