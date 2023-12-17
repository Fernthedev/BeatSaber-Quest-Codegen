#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankModel)
namespace GlobalNamespace {
struct __RankModel__Rank;
}
// Forward declare root types
namespace GlobalNamespace {
struct __RankModel__Rank;
}
namespace GlobalNamespace {
class RankModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__RankModel__Rank);
MARK_REF_PTR_T(::GlobalNamespace::RankModel);
// Type: ::Rank
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15034))
// CS Name: ::RankModel::Rank
struct CORDL_TYPE __RankModel__Rank : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____RankModel__Rank_Unwrapped
enum struct ____RankModel__Rank_Unwrapped : int32_t {
__E_E = static_cast<int32_t>(0x0),
__E_D = static_cast<int32_t>(0x1),
__E_C = static_cast<int32_t>(0x2),
__E_B = static_cast<int32_t>(0x3),
__E_A = static_cast<int32_t>(0x4),
__E_S = static_cast<int32_t>(0x5),
__E_SS = static_cast<int32_t>(0x6),
__E_SSS = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field E value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__RankModel__Rank const E;

/// @brief Field D value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__RankModel__Rank const D;

/// @brief Field C value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__RankModel__Rank const C;

/// @brief Field B value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__RankModel__Rank const B;

/// @brief Field A value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__RankModel__Rank const A;

/// @brief Field S value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__RankModel__Rank const S;

/// @brief Field SS value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::__RankModel__Rank const SS;

/// @brief Field SSS value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::__RankModel__Rank const SSS;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____RankModel__Rank_Unwrapped () const noexcept {
return std::bit_cast<____RankModel__Rank_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __RankModel__Rank(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __RankModel__Rank(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __RankModel__Rank()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RankModel__Rank, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RankModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15035))
// CS Name: ::RankModel*
class CORDL_TYPE RankModel : public ::System::Object {
public:
// Declarations
using Rank = ::GlobalNamespace::__RankModel__Rank;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetRankName addr 0x12a6590 size 0xbc virtual false final false
static inline ::StringW GetRankName(::GlobalNamespace::__RankModel__Rank  rank) ;

/// @brief Method GetRankForScore addr 0x12a664c size 0xc8 virtual false final false
static inline ::GlobalNamespace::__RankModel__Rank GetRankForScore(int32_t  multipliedScore, int32_t  modifiedScore, int32_t  maxMultipliedScore, int32_t  maxModifiedScore) ;

// Ctor Parameters [CppParam { name: "", ty: "RankModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RankModel(RankModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RankModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RankModel(RankModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RankModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RankModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RankModel__Rank, "", "RankModel/Rank");
NEED_NO_BOX(::GlobalNamespace::RankModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModel*, "", "RankModel");
