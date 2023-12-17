#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineInfo)
// Forward declare root types
namespace System::Xml {
struct LineInfo;
}
// Write type traits
MARK_VAL_T(::System::Xml::LineInfo);
// Type: System.Xml::LineInfo
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11532))
// CS Name: ::System.Xml::LineInfo
struct CORDL_TYPE LineInfo : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field lineNo offset 0x0
 __declspec(property(get=__get_lineNo, put=__set_lineNo)) int32_t  lineNo;

/// @brief Field linePos offset 0x4
 __declspec(property(get=__get_linePos, put=__set_linePos)) int32_t  linePos;

constexpr void __set_lineNo(int32_t  value) ;

constexpr int32_t& __get_lineNo() ;

constexpr int32_t const& __get_lineNo() const;

constexpr void __set_linePos(int32_t  value) ;

constexpr int32_t& __get_linePos() ;

constexpr int32_t const& __get_linePos() const;

/// @brief Method .ctor addr 0x28923c4 size 0x8 virtual false final false
inline void _ctor(int32_t  lineNo, int32_t  linePos) ;

/// @brief Method Set addr 0x28923cc size 0x8 virtual false final false
inline void Set(int32_t  lineNo, int32_t  linePos) ;

// Ctor Parameters [CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LineInfo(int32_t  lineNo, int32_t  linePos) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LineInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LineInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::LineInfo, 0x8>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::LineInfo, "System.Xml", "LineInfo");
