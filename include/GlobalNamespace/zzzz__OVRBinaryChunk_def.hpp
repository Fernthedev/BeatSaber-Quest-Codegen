#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBinaryChunk)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBinaryChunk);
// Type: ::OVRBinaryChunk
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7564))
// CS Name: ::OVRBinaryChunk
struct CORDL_TYPE OVRBinaryChunk : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field chunkStream offset 0x0
 __declspec(property(get=__get_chunkStream, put=__set_chunkStream)) ::System::IO::Stream*  chunkStream;

/// @brief Field chunkLength offset 0x8
 __declspec(property(get=__get_chunkLength, put=__set_chunkLength)) uint32_t  chunkLength;

/// @brief Field chunkStart offset 0x10
 __declspec(property(get=__get_chunkStart, put=__set_chunkStart)) int64_t  chunkStart;

constexpr void __set_chunkStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_chunkStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_chunkStream() const;

constexpr void __set_chunkLength(uint32_t  value) ;

constexpr uint32_t& __get_chunkLength() ;

constexpr uint32_t const& __get_chunkLength() const;

constexpr void __set_chunkStart(int64_t  value) ;

constexpr int64_t& __get_chunkStart() ;

constexpr int64_t const& __get_chunkStart() const;

// Ctor Parameters [CppParam { name: "chunkStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "chunkLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "chunkStart", ty: "int64_t", modifiers: "", def_value: None }]
constexpr OVRBinaryChunk(::System::IO::Stream*  chunkStream, uint32_t  chunkLength, int64_t  chunkStart) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRBinaryChunk(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRBinaryChunk()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBinaryChunk, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBinaryChunk, "", "OVRBinaryChunk");
