#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VectorConverter)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace UnityEngine {
struct Vector4;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class VectorConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::VectorConverter);
// Type: Newtonsoft.Json.Converters::VectorConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12044))
// CS Name: ::Newtonsoft.Json.Converters::VectorConverter*
class CORDL_TYPE VectorConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Newtonsoft::Json::JsonConverter)]{};

/// @brief Field <EnableVector2>k__BackingField offset 0x10
 __declspec(property(get=__get__EnableVector2_k__BackingField, put=__set__EnableVector2_k__BackingField)) bool  _EnableVector2_k__BackingField;

/// @brief Field <EnableVector3>k__BackingField offset 0x11
 __declspec(property(get=__get__EnableVector3_k__BackingField, put=__set__EnableVector3_k__BackingField)) bool  _EnableVector3_k__BackingField;

/// @brief Field <EnableVector4>k__BackingField offset 0x12
 __declspec(property(get=__get__EnableVector4_k__BackingField, put=__set__EnableVector4_k__BackingField)) bool  _EnableVector4_k__BackingField;

 __declspec(property(get=get_EnableVector2, put=set_EnableVector2)) bool  EnableVector2;

 __declspec(property(get=get_EnableVector3, put=set_EnableVector3)) bool  EnableVector3;

 __declspec(property(get=get_EnableVector4, put=set_EnableVector4)) bool  EnableVector4;

static inline void setStaticF_V2(::System::Type*  value) ;

static inline ::System::Type* getStaticF_V2() ;

static inline void setStaticF_V3(::System::Type*  value) ;

static inline ::System::Type* getStaticF_V3() ;

static inline void setStaticF_V4(::System::Type*  value) ;

static inline ::System::Type* getStaticF_V4() ;

constexpr void __set__EnableVector2_k__BackingField(bool  value) ;

constexpr bool& __get__EnableVector2_k__BackingField() ;

constexpr bool const& __get__EnableVector2_k__BackingField() const;

constexpr void __set__EnableVector3_k__BackingField(bool  value) ;

constexpr bool& __get__EnableVector3_k__BackingField() ;

constexpr bool const& __get__EnableVector3_k__BackingField() const;

constexpr void __set__EnableVector4_k__BackingField(bool  value) ;

constexpr bool& __get__EnableVector4_k__BackingField() ;

constexpr bool const& __get__EnableVector4_k__BackingField() const;

/// @brief Method get_EnableVector2 addr 0x26b7a18 size 0x8 virtual false final false
inline bool get_EnableVector2() ;

/// @brief Method set_EnableVector2 addr 0x26b7a20 size 0xc virtual false final false
inline void set_EnableVector2(bool  value) ;

/// @brief Method get_EnableVector3 addr 0x26b7a2c size 0x8 virtual false final false
inline bool get_EnableVector3() ;

/// @brief Method set_EnableVector3 addr 0x26b7a34 size 0xc virtual false final false
inline void set_EnableVector3(bool  value) ;

/// @brief Method get_EnableVector4 addr 0x26b7a40 size 0x8 virtual false final false
inline bool get_EnableVector4() ;

/// @brief Method set_EnableVector4 addr 0x26b7a48 size 0xc virtual false final false
inline void set_EnableVector4(bool  value) ;

static inline ::Newtonsoft::Json::Converters::VectorConverter* New_ctor() ;

/// @brief Method .ctor addr 0x26b7a54 size 0x28 virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Converters::VectorConverter* New_ctor(bool  enableVector2, bool  enableVector3, bool  enableVector4) ;

/// @brief Method .ctor addr 0x26b7a7c size 0x4c virtual false final false
inline void _ctor(bool  enableVector2, bool  enableVector3, bool  enableVector4) ;

/// @brief Method WriteJson addr 0x26b7ac8 size 0x2b0 virtual true final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method WriteVector addr 0x26b7d78 size 0x1d0 virtual false final false
static inline void WriteVector(::Newtonsoft::Json::JsonWriter*  writer, float_t  x, float_t  y, ::System::Nullable_1<float_t>  z, ::System::Nullable_1<float_t>  w) ;

/// @brief Method ReadJson addr 0x26b7f48 size 0x138 virtual true final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method CanConvert addr 0x26b83ec size 0xd8 virtual true final false
inline bool CanConvert(::System::Type*  objectType) ;

/// @brief Method PopulateVector2 addr 0x26b8080 size 0xe4 virtual false final false
static inline ::UnityEngine::Vector2 PopulateVector2(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method PopulateVector3 addr 0x26b8164 size 0x124 virtual false final false
static inline ::UnityEngine::Vector3 PopulateVector3(::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method PopulateVector4 addr 0x26b8288 size 0x164 virtual false final false
static inline ::UnityEngine::Vector4 PopulateVector4(::Newtonsoft::Json::JsonReader*  reader) ;

// Ctor Parameters [CppParam { name: "", ty: "VectorConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorConverter(VectorConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorConverter(VectorConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VectorConverter()  = default;
public:


// Fields

// Static field V2

// Static field V3

// Static field V4


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::VectorConverter, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::VectorConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::VectorConverter*, "Newtonsoft.Json.Converters", "VectorConverter");
