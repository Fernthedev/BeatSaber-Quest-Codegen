#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyValuesSetter)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyValuePairBase;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyValuesSetter;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyValuePairBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase);
// Type: ::PropertyValuePairBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14572))
// CS Name: ::MaterialPropertyValuesSetter::PropertyValuePairBase*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyValuePairBase : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _propertyName offset 0x10
 __declspec(property(get=__get__propertyName, put=__set__propertyName)) ::StringW  _propertyName;

/// @brief Field <propertyId>k__BackingField offset 0x18
 __declspec(property(get=__get__propertyId_k__BackingField, put=__set__propertyId_k__BackingField)) int32_t  _propertyId_k__BackingField;

 __declspec(property(get=get_propertyId, put=set_propertyId)) int32_t  propertyId;

constexpr void __set__propertyName(::StringW  value) ;

constexpr ::StringW& __get__propertyName() ;

constexpr ::StringW const& __get__propertyName() const;

constexpr void __set__propertyId_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__propertyId_k__BackingField() ;

constexpr int32_t const& __get__propertyId_k__BackingField() const;

/// @brief Method get_propertyId addr 0x21158cc size 0x8 virtual false final false
inline int32_t get_propertyId() ;

/// @brief Method set_propertyId addr 0x21158d4 size 0x8 virtual false final false
inline void set_propertyId(int32_t  value) ;

static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase* New_ctor() ;

/// @brief Method .ctor addr 0x21158dc size 0x28 virtual false final false
inline void _ctor() ;

/// @brief Method RefreshPropertyId addr 0x21158a4 size 0x20 virtual false final false
inline void RefreshPropertyId() ;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyValuePairBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MaterialPropertyValuesSetter__PropertyValuePairBase(__MaterialPropertyValuesSetter__PropertyValuePairBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyValuePairBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MaterialPropertyValuesSetter__PropertyValuePairBase(__MaterialPropertyValuesSetter__PropertyValuePairBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MaterialPropertyValuesSetter__PropertyValuePairBase()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PropertyNameFloatValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14573))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameFloatValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameFloatValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase)]{};

/// @brief Field value offset 0x1c
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair* New_ctor() ;

/// @brief Method .ctor addr 0x2115904 size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameFloatValuePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MaterialPropertyValuesSetter__PropertyNameFloatValuePair(__MaterialPropertyValuesSetter__PropertyNameFloatValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameFloatValuePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MaterialPropertyValuesSetter__PropertyNameFloatValuePair(__MaterialPropertyValuesSetter__PropertyNameFloatValuePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MaterialPropertyValuesSetter__PropertyNameFloatValuePair()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PropertyNameIntValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14574))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameIntValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameIntValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase)]{};

/// @brief Field value offset 0x1c
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair* New_ctor() ;

/// @brief Method .ctor addr 0x211592c size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameIntValuePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MaterialPropertyValuesSetter__PropertyNameIntValuePair(__MaterialPropertyValuesSetter__PropertyNameIntValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameIntValuePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MaterialPropertyValuesSetter__PropertyNameIntValuePair(__MaterialPropertyValuesSetter__PropertyNameIntValuePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MaterialPropertyValuesSetter__PropertyNameIntValuePair()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PropertyNameVectorValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14575))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameVectorValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameVectorValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase)]{};

/// @brief Field vector offset 0x1c
 __declspec(property(get=__get_vector, put=__set_vector)) ::UnityEngine::Vector4  vector;

constexpr void __set_vector(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_vector() ;

constexpr ::UnityEngine::Vector4 const& __get_vector() const;

static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair* New_ctor() ;

/// @brief Method .ctor addr 0x2115954 size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameVectorValuePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MaterialPropertyValuesSetter__PropertyNameVectorValuePair(__MaterialPropertyValuesSetter__PropertyNameVectorValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameVectorValuePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MaterialPropertyValuesSetter__PropertyNameVectorValuePair(__MaterialPropertyValuesSetter__PropertyNameVectorValuePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MaterialPropertyValuesSetter__PropertyNameVectorValuePair()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PropertyNameColorValuePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14576))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameColorValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameColorValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase)]{};

/// @brief Field color offset 0x1c
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair* New_ctor() ;

/// @brief Method .ctor addr 0x211597c size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameColorValuePair", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MaterialPropertyValuesSetter__PropertyNameColorValuePair(__MaterialPropertyValuesSetter__PropertyNameColorValuePair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameColorValuePair", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MaterialPropertyValuesSetter__PropertyNameColorValuePair(__MaterialPropertyValuesSetter__PropertyNameColorValuePair const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MaterialPropertyValuesSetter__PropertyNameColorValuePair()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MaterialPropertyValuesSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14577))
// CS Name: ::MaterialPropertyValuesSetter*
class CORDL_TYPE MaterialPropertyValuesSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropertyNameColorValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair;

using PropertyNameVectorValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair;

using PropertyNameIntValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair;

using PropertyNameFloatValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair;

using PropertyValuePairBase = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _materialPropertyBlockController offset 0x18
 __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController)) ::GlobalNamespace::MaterialPropertyBlockController*  _materialPropertyBlockController;

/// @brief Field _floats offset 0x20
 __declspec(property(get=__get__floats, put=__set__floats)) ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*>  _floats;

/// @brief Field _vectors offset 0x28
 __declspec(property(get=__get__vectors, put=__set__vectors)) ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*>  _vectors;

/// @brief Field _colors offset 0x30
 __declspec(property(get=__get__colors, put=__set__colors)) ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*>  _colors;

/// @brief Field _ints offset 0x38
 __declspec(property(get=__get__ints, put=__set__ints)) ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*>  _ints;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController* __get__materialPropertyBlockController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> __get__materialPropertyBlockController() const;

constexpr void __set__floats(::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*>& __get__floats() ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> const& __get__floats() const;

constexpr void __set__vectors(::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*>& __get__vectors() ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> const& __get__vectors() const;

constexpr void __set__colors(::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*>& __get__colors() ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> const& __get__colors() const;

constexpr void __set__ints(::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*>& __get__ints() ;

constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*,::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> const& __get__ints() const;

/// @brief Method Start addr 0x21154f8 size 0x18 virtual false final false
inline void Start() ;

/// @brief Method OnValidate addr 0x211580c size 0x98 virtual false final false
inline void OnValidate() ;

/// @brief Method RefreshPropertyIds addr 0x2115510 size 0x158 virtual false final false
inline void RefreshPropertyIds() ;

/// @brief Method ApplyParams addr 0x2115668 size 0x1a4 virtual false final false
inline void ApplyParams() ;

static inline ::GlobalNamespace::MaterialPropertyValuesSetter* New_ctor() ;

/// @brief Method .ctor addr 0x21158c4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyValuesSetter(MaterialPropertyValuesSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyValuesSetter(MaterialPropertyValuesSetter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MaterialPropertyValuesSetter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter*, "", "MaterialPropertyValuesSetter");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameColorValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameFloatValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameIntValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameVectorValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*, "", "MaterialPropertyValuesSetter/PropertyValuePairBase");
