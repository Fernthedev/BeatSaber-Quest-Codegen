#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_OutputAttribute)
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_OutputAttribute);
// Type: HoudiniEngineUnity::HEU_OutputAttribute
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9666))
// CS Name: ::HoudiniEngineUnity::HEU_OutputAttribute*
class CORDL_TYPE HEU_OutputAttribute : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field _name offset 0x10
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _class offset 0x18
 __declspec(property(get=__get__class, put=__set__class)) ::HoudiniEngineUnity::HAPI_AttributeOwner  _class;

/// @brief Field _type offset 0x1c
 __declspec(property(get=__get__type, put=__set__type)) ::HoudiniEngineUnity::HAPI_StorageType  _type;

/// @brief Field _count offset 0x20
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

/// @brief Field _tupleSize offset 0x24
 __declspec(property(get=__get__tupleSize, put=__set__tupleSize)) int32_t  _tupleSize;

/// @brief Field _intValues offset 0x28
 __declspec(property(get=__get__intValues, put=__set__intValues)) ::ArrayW<int32_t,::Array<int32_t>*>  _intValues;

/// @brief Field _floatValues offset 0x30
 __declspec(property(get=__get__floatValues, put=__set__floatValues)) ::ArrayW<float_t,::Array<float_t>*>  _floatValues;

/// @brief Field _stringValues offset 0x38
 __declspec(property(get=__get__stringValues, put=__set__stringValues)) ::ArrayW<::StringW,::Array<::StringW>*>  _stringValues;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__class(::HoudiniEngineUnity::HAPI_AttributeOwner  value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner& __get__class() ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeOwner const& __get__class() const;

constexpr void __set__type(::HoudiniEngineUnity::HAPI_StorageType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType& __get__type() ;

constexpr ::HoudiniEngineUnity::HAPI_StorageType const& __get__type() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

constexpr void __set__tupleSize(int32_t  value) ;

constexpr int32_t& __get__tupleSize() ;

constexpr int32_t const& __get__tupleSize() const;

constexpr void __set__intValues(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__intValues() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__intValues() const;

constexpr void __set__floatValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__floatValues() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__floatValues() const;

constexpr void __set__stringValues(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__stringValues() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__stringValues() const;

static inline ::HoudiniEngineUnity::HEU_OutputAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x21839d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_OutputAttribute(HEU_OutputAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_OutputAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_OutputAttribute(HEU_OutputAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_OutputAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_OutputAttribute, 0x40>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_OutputAttribute);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_OutputAttribute*, "HoudiniEngineUnity", "HEU_OutputAttribute");
