#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringBuffer)
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringBuffer;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::StringBuffer);
// Type: Newtonsoft.Json.Utilities::StringBuffer
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11890))
// CS Name: ::Newtonsoft.Json.Utilities::StringBuffer
struct CORDL_TYPE StringBuffer : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _buffer offset 0x0
 __declspec(property(get=__get__buffer, put=__set__buffer)) ::ArrayW<char16_t,::Array<char16_t>*>  _buffer;

/// @brief Field _position offset 0x8
 __declspec(property(get=__get__position, put=__set__position)) int32_t  _position;

 __declspec(property(get=get_Position, put=set_Position)) int32_t  Position;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_InternalBuffer)) ::ArrayW<char16_t,::Array<char16_t>*>  InternalBuffer;

constexpr void __set__buffer(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__buffer() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__buffer() const;

constexpr void __set__position(int32_t  value) ;

constexpr int32_t& __get__position() ;

constexpr int32_t const& __get__position() const;

/// @brief Method get_Position addr 0x2664220 size 0x8 virtual false final false
inline int32_t get_Position() ;

/// @brief Method set_Position addr 0x2664228 size 0x8 virtual false final false
inline void set_Position(int32_t  value) ;

/// @brief Method get_IsEmpty addr 0x2664230 size 0x10 virtual false final false
inline bool get_IsEmpty() ;

/// @brief Method .ctor addr 0x2664240 size 0x24 virtual false final false
inline void _ctor(::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, int32_t  initalSize) ;

/// @brief Method .ctor addr 0x2664264 size 0xc virtual false final false
inline void _ctor(::ArrayW<char16_t,::Array<char16_t>*>  buffer) ;

/// @brief Method Append addr 0x2664270 size 0x78 virtual false final false
inline void Append(::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, char16_t  value) ;

/// @brief Method Append addr 0x2664348 size 0x80 virtual false final false
inline void Append(::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, ::ArrayW<char16_t,::Array<char16_t>*>  buffer, int32_t  startIndex, int32_t  count) ;

/// @brief Method Clear addr 0x26643c8 size 0x2c virtual false final false
inline void Clear(::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool) ;

/// @brief Method EnsureSize addr 0x26642e8 size 0x60 virtual false final false
inline void EnsureSize(::Newtonsoft::Json::IArrayPool_1<char16_t>*  bufferPool, int32_t  appendLength) ;

/// @brief Method ToString addr 0x26643f4 size 0x18 virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToString addr 0x266440c size 0x1c virtual false final false
inline ::StringW ToString(int32_t  start, int32_t  length) ;

/// @brief Method get_InternalBuffer addr 0x2664428 size 0x8 virtual false final false
inline ::ArrayW<char16_t,::Array<char16_t>*> get_InternalBuffer() ;

// Ctor Parameters [CppParam { name: "_buffer", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_position", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringBuffer(::ArrayW<char16_t,::Array<char16_t>*>  _buffer, int32_t  _position) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StringBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StringBuffer()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringBuffer, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringBuffer, "Newtonsoft.Json.Utilities", "StringBuffer");
