#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAsset)
namespace UnityEngine {
struct __TextAsset__CreateOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class __TextAsset__EncodingUtility;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
struct __TextAsset__CreateOptions;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class __TextAsset__EncodingUtility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__TextAsset__CreateOptions);
MARK_REF_PTR_T(::UnityEngine::TextAsset);
MARK_REF_PTR_T(::UnityEngine::__TextAsset__EncodingUtility);
// Type: ::CreateOptions
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10206))
// CS Name: ::TextAsset::CreateOptions
struct CORDL_TYPE __TextAsset__CreateOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TextAsset__CreateOptions_Unwrapped
enum struct ____TextAsset__CreateOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CreateNativeObject = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::__TextAsset__CreateOptions const None;

/// @brief Field CreateNativeObject value: static_cast<int32_t>(0x1)
static ::UnityEngine::__TextAsset__CreateOptions const CreateNativeObject;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TextAsset__CreateOptions_Unwrapped () const noexcept {
return std::bit_cast<____TextAsset__CreateOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TextAsset__CreateOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TextAsset__CreateOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TextAsset__CreateOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextAsset__CreateOptions, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::EncodingUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10207))
// CS Name: ::TextAsset::EncodingUtility*
class CORDL_TYPE __TextAsset__EncodingUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_encodingLookup(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*>  value) ;

static inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>,::Array<::System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t,::Array<uint8_t>*>,::System::Text::Encoding*>>*> getStaticF_encodingLookup() ;

static inline void setStaticF_targetEncoding(::System::Text::Encoding*  value) ;

static inline ::System::Text::Encoding* getStaticF_targetEncoding() ;

// Ctor Parameters [CppParam { name: "", ty: "__TextAsset__EncodingUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextAsset__EncodingUtility(__TextAsset__EncodingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextAsset__EncodingUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextAsset__EncodingUtility(__TextAsset__EncodingUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextAsset__EncodingUtility()  = default;
public:


// Fields

// Static field encodingLookup

// Static field targetEncoding


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextAsset__EncodingUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::TextAsset
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10208))
// CS Name: ::UnityEngine::TextAsset*
class CORDL_TYPE TextAsset : public ::UnityEngine::Object {
public:
// Declarations
using EncodingUtility = ::UnityEngine::__TextAsset__EncodingUtility;

using CreateOptions = ::UnityEngine::__TextAsset__CreateOptions;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Object)]{};

 __declspec(property(get=get_bytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes;

 __declspec(property(get=get_text)) ::StringW  text;

 __declspec(property(get=get_dataSize)) int64_t  dataSize;

/// @brief Method get_bytes addr 0x2cd0e54 size 0x3c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_bytes() ;

/// @brief Method GetPreviewBytes addr 0x2cd0e90 size 0x44 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetPreviewBytes(int32_t  maxByteCount) ;

/// @brief Method Internal_CreateInstance addr 0x2cd0ed4 size 0x44 virtual false final false
static inline void Internal_CreateInstance(::UnityEngine::TextAsset*  self, ::StringW  text) ;

/// @brief Method GetDataPtr addr 0x2cd0f18 size 0x3c virtual false final false
inline ::cordl_internals::intptr_t GetDataPtr() ;

/// @brief Method GetDataSize addr 0x2cd0f54 size 0x3c virtual false final false
inline int64_t GetDataSize() ;

/// @brief Method get_text addr 0x2cd0f90 size 0x40 virtual false final false
inline ::StringW get_text() ;

/// @brief Method get_dataSize addr 0x2cd1254 size 0x3c virtual false final false
inline int64_t get_dataSize() ;

/// @brief Method ToString addr 0x2cd1290 size 0x4 virtual true final false
inline ::StringW ToString() ;

static inline ::UnityEngine::TextAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2cd1294 size 0xc virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::TextAsset* New_ctor(::StringW  text) ;

/// @brief Method .ctor addr 0x2cd134c size 0xc virtual false final false
inline void _ctor(::StringW  text) ;

static inline ::UnityEngine::TextAsset* New_ctor(::UnityEngine::__TextAsset__CreateOptions  options, ::StringW  text) ;

/// @brief Method .ctor addr 0x2cd12a0 size 0xac virtual false final false
inline void _ctor(::UnityEngine::__TextAsset__CreateOptions  options, ::StringW  text) ;

/// @brief Method GetData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetData() ;

/// @brief Method GetPreview addr 0x2cd1358 size 0x48 virtual false final false
inline ::StringW GetPreview(int32_t  maxChars) ;

/// @brief Method DecodeString addr 0x2cd0fd0 size 0x284 virtual false final false
static inline ::StringW DecodeString(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextAsset(TextAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextAsset(TextAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextAsset()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextAsset, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextAsset__CreateOptions, "UnityEngine", "TextAsset/CreateOptions");
NEED_NO_BOX(::UnityEngine::TextAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAsset*, "UnityEngine", "TextAsset");
NEED_NO_BOX(::UnityEngine::__TextAsset__EncodingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextAsset__EncodingUtility*, "UnityEngine", "TextAsset/EncodingUtility");
