#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelMask)
namespace GlobalNamespace {
class BitMaskSparse;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelMask;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelMask);
// Type: ::BeatmapLevelMask
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14988))
// CS Name: ::BeatmapLevelMask*
class CORDL_TYPE BeatmapLevelMask : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kBitCount offset 0x0
static constexpr int32_t  kBitCount{static_cast<int32_t>(0x4000)};

/// @brief Field kHashCount offset 0x0
static constexpr int32_t  kHashCount{static_cast<int32_t>(0x1)};

/// @brief Field kHashBits offset 0x0
static constexpr int32_t  kHashBits{static_cast<int32_t>(0xe)};

/// @brief Field kToStringPrefix offset 0x0
static constexpr ::ConstString  kToStringPrefix{u"[BeatmapLevelMask "};

/// @brief Field kToStringSuffix offset 0x0
static constexpr ::ConstString  kToStringSuffix{u"]"};

/// @brief Field _bloomFilter offset 0x10
 __declspec(property(get=__get__bloomFilter, put=__set__bloomFilter)) ::GlobalNamespace::BitMaskSparse*  _bloomFilter;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelMask*>*() noexcept;

constexpr void __set__bloomFilter(::GlobalNamespace::BitMaskSparse*  value) ;

constexpr ::GlobalNamespace::BitMaskSparse* __get__bloomFilter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BitMaskSparse*> __get__bloomFilter() const;

static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor() ;

/// @brief Method .ctor addr 0x12a0410 size 0x68 virtual false final false
inline void _ctor() ;

static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor(::StringW  level) ;

/// @brief Method .ctor addr 0x12a0508 size 0xa0 virtual false final false
inline void _ctor(::StringW  level) ;

static inline ::GlobalNamespace::BeatmapLevelMask* New_ctor(::System::Collections::Generic::HashSet_1<::StringW>*  levelSet) ;

/// @brief Method .ctor addr 0x12a05a8 size 0x198 virtual false final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::StringW>*  levelSet) ;

/// @brief Method Contains addr 0x12a0740 size 0x60 virtual false final false
inline bool Contains(::StringW  state) ;

/// @brief Method AddLevel addr 0x12a07a0 size 0x60 virtual false final false
inline void AddLevel(::StringW  state) ;

/// @brief Method Serialize addr 0x12a0800 size 0x18 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a09ac size 0x18 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method ToString addr 0x12a0a58 size 0x84 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x12a0adc size 0x20 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x12a0afc size 0x20 virtual true final true
inline bool Equals(::GlobalNamespace::BeatmapLevelMask*  other) ;

/// @brief Method Equals addr 0x12a0b1c size 0x8c virtual true final false
inline bool Equals(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapLevelMask(BeatmapLevelMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelMask", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapLevelMask(BeatmapLevelMask const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapLevelMask()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelMask, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelMask*, "", "BeatmapLevelMask");
