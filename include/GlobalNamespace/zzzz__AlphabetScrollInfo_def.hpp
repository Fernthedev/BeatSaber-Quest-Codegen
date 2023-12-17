#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlphabetScrollInfo)
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
// Forward declare root types
namespace GlobalNamespace {
class AlphabetScrollInfo;
}
namespace GlobalNamespace {
class __AlphabetScrollInfo__Data;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AlphabetScrollInfo);
MARK_REF_PTR_T(::GlobalNamespace::__AlphabetScrollInfo__Data);
// Type: ::Data
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14349))
// CS Name: ::AlphabetScrollInfo::Data*
class CORDL_TYPE __AlphabetScrollInfo__Data : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field character offset 0x10
 __declspec(property(get=__get_character, put=__set_character)) char16_t  character;

/// @brief Field cellIdx offset 0x14
 __declspec(property(get=__get_cellIdx, put=__set_cellIdx)) int32_t  cellIdx;

constexpr void __set_character(char16_t  value) ;

constexpr char16_t& __get_character() ;

constexpr char16_t const& __get_character() const;

constexpr void __set_cellIdx(int32_t  value) ;

constexpr int32_t& __get_cellIdx() ;

constexpr int32_t const& __get_cellIdx() const;

static inline ::GlobalNamespace::__AlphabetScrollInfo__Data* New_ctor(char16_t  character, int32_t  cellIdx) ;

/// @brief Method .ctor addr 0x20f0df8 size 0x30 virtual false final false
inline void _ctor(char16_t  character, int32_t  cellIdx) ;

// Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollInfo__Data", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AlphabetScrollInfo__Data(__AlphabetScrollInfo__Data && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AlphabetScrollInfo__Data", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AlphabetScrollInfo__Data(__AlphabetScrollInfo__Data const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AlphabetScrollInfo__Data()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AlphabetScrollInfo__Data, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AlphabetScrollInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14350))
// CS Name: ::AlphabetScrollInfo*
class CORDL_TYPE AlphabetScrollInfo : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::__AlphabetScrollInfo__Data;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::GlobalNamespace::AlphabetScrollInfo* New_ctor() ;

/// @brief Method .ctor addr 0x20f0df0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlphabetScrollInfo(AlphabetScrollInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlphabetScrollInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlphabetScrollInfo(AlphabetScrollInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AlphabetScrollInfo()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlphabetScrollInfo, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AlphabetScrollInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlphabetScrollInfo*, "", "AlphabetScrollInfo");
NEED_NO_BOX(::GlobalNamespace::__AlphabetScrollInfo__Data);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AlphabetScrollInfo__Data*, "", "AlphabetScrollInfo/Data");
