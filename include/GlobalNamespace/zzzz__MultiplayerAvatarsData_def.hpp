#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarsData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
struct BitMask128;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerAvatarsData);
// Type: ::MultiplayerAvatarsData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15021))
// CS Name: ::MultiplayerAvatarsData
struct CORDL_TYPE MultiplayerAvatarsData : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field multiplayerAvatarsData offset 0x0
 __declspec(property(get=__get_multiplayerAvatarsData, put=__set_multiplayerAvatarsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*  multiplayerAvatarsData;

/// @brief Field supportedAvatarTypeIdHashesBloomFilter offset 0x8
 __declspec(property(get=__get_supportedAvatarTypeIdHashesBloomFilter, put=__set_supportedAvatarTypeIdHashesBloomFilter)) ::GlobalNamespace::BitMask128  supportedAvatarTypeIdHashesBloomFilter;

/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*() ;

constexpr void __set_multiplayerAvatarsData(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* __get_multiplayerAvatarsData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*> __get_multiplayerAvatarsData() const;

constexpr void __set_supportedAvatarTypeIdHashesBloomFilter(::GlobalNamespace::BitMask128  value) ;

constexpr ::GlobalNamespace::BitMask128& __get_supportedAvatarTypeIdHashesBloomFilter() ;

constexpr ::GlobalNamespace::BitMask128 const& __get_supportedAvatarTypeIdHashesBloomFilter() const;

/// @brief Method .ctor addr 0x12a3428 size 0x6c virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*  multiplayerAvatarsData, ::System::Collections::Generic::IEnumerable_1<uint32_t>*  supportedAvatarTypeIdHashes) ;

/// @brief Method .ctor addr 0x12a3494 size 0xc virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*  multiplayerAvatarsData, ::GlobalNamespace::BitMask128  supportedAvatarTypeIdHashesBloomFilter) ;

/// @brief Method Serialize addr 0x12a34a0 size 0x28 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method SerializeAvatarsData addr 0x12a34c8 size 0x1a0 virtual false final false
inline void SerializeAvatarsData(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method CreateFromSerializedData addr 0x12a3668 size 0x38 virtual true final true
inline ::GlobalNamespace::MultiplayerAvatarsData CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Deserialize addr 0x12a36a0 size 0x34 virtual false final false
static inline ::GlobalNamespace::MultiplayerAvatarsData Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method DeserializeAvatarsData addr 0x12a36d4 size 0x134 virtual false final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* DeserializeAvatarsData(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Equals addr 0x12a3808 size 0x164 virtual true final true
inline bool Equals(::GlobalNamespace::MultiplayerAvatarsData  other) ;

/// @brief Method Equals addr 0x12a396c size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x12a39fc size 0x228 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method SupportsOptionalAvatarDataType addr 0x12a3c24 size 0x60 virtual false final false
inline bool SupportsOptionalAvatarDataType(uint32_t  typeHash) ;

// Ctor Parameters [CppParam { name: "multiplayerAvatarsData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*", modifiers: "", def_value: None }, CppParam { name: "supportedAvatarTypeIdHashesBloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: None }]
constexpr MultiplayerAvatarsData(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*  multiplayerAvatarsData, ::GlobalNamespace::BitMask128  supportedAvatarTypeIdHashesBloomFilter) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MultiplayerAvatarsData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MultiplayerAvatarsData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerAvatarsData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarsData, "", "MultiplayerAvatarsData");
