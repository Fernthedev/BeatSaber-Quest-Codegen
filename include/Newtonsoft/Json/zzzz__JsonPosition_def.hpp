#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonPosition)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
struct JsonContainerType;
}
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonPosition;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::JsonPosition);
// Type: Newtonsoft.Json::JsonPosition
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11807))
// CS Name: ::Newtonsoft.Json::JsonPosition
struct CORDL_TYPE JsonPosition : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Type offset 0x0
 __declspec(property(get=__get_Type, put=__set_Type)) ::Newtonsoft::Json::JsonContainerType  Type;

/// @brief Field Position offset 0x4
 __declspec(property(get=__get_Position, put=__set_Position)) int32_t  Position;

/// @brief Field PropertyName offset 0x8
 __declspec(property(get=__get_PropertyName, put=__set_PropertyName)) ::StringW  PropertyName;

/// @brief Field HasIndex offset 0x10
 __declspec(property(get=__get_HasIndex, put=__set_HasIndex)) bool  HasIndex;

static inline void setStaticF_SpecialCharacters(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_SpecialCharacters() ;

constexpr void __set_Type(::Newtonsoft::Json::JsonContainerType  value) ;

constexpr ::Newtonsoft::Json::JsonContainerType& __get_Type() ;

constexpr ::Newtonsoft::Json::JsonContainerType const& __get_Type() const;

constexpr void __set_Position(int32_t  value) ;

constexpr int32_t& __get_Position() ;

constexpr int32_t const& __get_Position() const;

constexpr void __set_PropertyName(::StringW  value) ;

constexpr ::StringW& __get_PropertyName() ;

constexpr ::StringW const& __get_PropertyName() const;

constexpr void __set_HasIndex(bool  value) ;

constexpr bool& __get_HasIndex() ;

constexpr bool const& __get_HasIndex() const;

/// @brief Method .ctor addr 0x263e9ec size 0x7c virtual false final false
inline void _ctor(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method CalculateLength addr 0x263ea78 size 0x98 virtual false final false
inline int32_t CalculateLength() ;

/// @brief Method WriteTo addr 0x263eb10 size 0x168 virtual false final false
inline void WriteTo(::System::Text::StringBuilder*  sb) ;

/// @brief Method TypeHasIndex addr 0x263ea68 size 0x10 virtual false final false
static inline bool TypeHasIndex(::Newtonsoft::Json::JsonContainerType  type) ;

/// @brief Method BuildPath addr 0x263ec78 size 0x29c virtual false final false
static inline ::StringW BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*  positions, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition>  currentPosition) ;

/// @brief Method FormatMessage addr 0x263e678 size 0x32c virtual false final false
static inline ::StringW FormatMessage(::Newtonsoft::Json::IJsonLineInfo*  lineInfo, ::StringW  path, ::StringW  message) ;

// Ctor Parameters [CppParam { name: "Type", ty: "::Newtonsoft::Json::JsonContainerType", modifiers: "", def_value: None }, CppParam { name: "Position", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HasIndex", ty: "bool", modifiers: "", def_value: None }]
constexpr JsonPosition(::Newtonsoft::Json::JsonContainerType  Type, int32_t  Position, ::StringW  PropertyName, bool  HasIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit JsonPosition(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 JsonPosition()  = default;


// Fields

// Static field SpecialCharacters


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonPosition, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonPosition, "Newtonsoft.Json", "JsonPosition");
