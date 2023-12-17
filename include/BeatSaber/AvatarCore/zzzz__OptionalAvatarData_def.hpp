#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalAvatarData)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::OptionalAvatarData);
// Type: BeatSaber.AvatarCore::OptionalAvatarData
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15205))
// CS Name: ::BeatSaber.AvatarCore::OptionalAvatarData
struct CORDL_TYPE OptionalAvatarData : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field kMaxDataSize offset 0x0
static constexpr int32_t  kMaxDataSize{static_cast<int32_t>(0x800)};

/// @brief Field dataType offset 0x0
 __declspec(property(get=__get_dataType, put=__set_dataType)) uint32_t  dataType;

/// @brief Field length offset 0x4
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

/// @brief Field data offset 0x8
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

/// @brief Convert operator to "::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>"
constexpr operator  ::System::IEquatable_1<::BeatSaber::AvatarCore::OptionalAvatarData>*() ;

constexpr void __set_dataType(uint32_t  value) ;

constexpr uint32_t& __get_dataType() ;

constexpr uint32_t const& __get_dataType() const;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

/// @brief Method Equals addr 0xe10c10 size 0xbc virtual true final true
inline bool Equals(::BeatSaber::AvatarCore::OptionalAvatarData  other) ;

// Ctor Parameters [CppParam { name: "dataType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr OptionalAvatarData(uint32_t  dataType, int32_t  length, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OptionalAvatarData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OptionalAvatarData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::OptionalAvatarData, 0x10>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::OptionalAvatarData, "BeatSaber.AvatarCore", "OptionalAvatarData");
