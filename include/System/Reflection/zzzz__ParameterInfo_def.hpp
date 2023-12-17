#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterInfo)
namespace System {
class Type;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::InteropServices {
class _ParameterInfo;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct ParameterAttributes;
}
// Forward declare root types
namespace System::Reflection {
class ParameterInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ParameterInfo);
// Type: System.Reflection::ParameterInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3483))
// CS Name: ::System.Reflection::ParameterInfo*
class CORDL_TYPE ParameterInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field MetadataToken_ParamDef offset 0x0
static constexpr int32_t  MetadataToken_ParamDef{static_cast<int32_t>(0x8000000)};

/// @brief Field AttrsImpl offset 0x10
 __declspec(property(get=__get_AttrsImpl, put=__set_AttrsImpl)) ::System::Reflection::ParameterAttributes  AttrsImpl;

/// @brief Field ClassImpl offset 0x18
 __declspec(property(get=__get_ClassImpl, put=__set_ClassImpl)) ::System::Type*  ClassImpl;

/// @brief Field DefaultValueImpl offset 0x20
 __declspec(property(get=__get_DefaultValueImpl, put=__set_DefaultValueImpl)) ::System::Object*  DefaultValueImpl;

/// @brief Field MemberImpl offset 0x28
 __declspec(property(get=__get_MemberImpl, put=__set_MemberImpl)) ::System::Reflection::MemberInfo*  MemberImpl;

/// @brief Field NameImpl offset 0x30
 __declspec(property(get=__get_NameImpl, put=__set_NameImpl)) ::StringW  NameImpl;

/// @brief Field PositionImpl offset 0x38
 __declspec(property(get=__get_PositionImpl, put=__set_PositionImpl)) int32_t  PositionImpl;

 __declspec(property(get=get_Attributes)) ::System::Reflection::ParameterAttributes  Attributes;

 __declspec(property(get=get_Member)) ::System::Reflection::MemberInfo*  Member;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ParameterType)) ::System::Type*  ParameterType;

 __declspec(property(get=get_Position)) int32_t  Position;

 __declspec(property(get=get_IsIn)) bool  IsIn;

 __declspec(property(get=get_IsOptional)) bool  IsOptional;

 __declspec(property(get=get_IsOut)) bool  IsOut;

 __declspec(property(get=get_DefaultValue)) ::System::Object*  DefaultValue;

/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr operator  ::System::Reflection::ICustomAttributeProvider*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr operator  ::System::Runtime::Serialization::IObjectReference*() noexcept;

/// @brief Convert operator to "::System::Runtime::InteropServices::_ParameterInfo"
constexpr operator  ::System::Runtime::InteropServices::_ParameterInfo*() noexcept;

constexpr void __set_AttrsImpl(::System::Reflection::ParameterAttributes  value) ;

constexpr ::System::Reflection::ParameterAttributes& __get_AttrsImpl() ;

constexpr ::System::Reflection::ParameterAttributes const& __get_AttrsImpl() const;

constexpr void __set_ClassImpl(::System::Type*  value) ;

constexpr ::System::Type* __get_ClassImpl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_ClassImpl() const;

constexpr void __set_DefaultValueImpl(::System::Object*  value) ;

constexpr ::System::Object* __get_DefaultValueImpl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_DefaultValueImpl() const;

constexpr void __set_MemberImpl(::System::Reflection::MemberInfo*  value) ;

constexpr ::System::Reflection::MemberInfo* __get_MemberImpl() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> __get_MemberImpl() const;

constexpr void __set_NameImpl(::StringW  value) ;

constexpr ::StringW& __get_NameImpl() ;

constexpr ::StringW const& __get_NameImpl() const;

constexpr void __set_PositionImpl(int32_t  value) ;

constexpr int32_t& __get_PositionImpl() ;

constexpr int32_t const& __get_PositionImpl() const;

static inline ::System::Reflection::ParameterInfo* New_ctor() ;

/// @brief Method .ctor addr 0x24e91c4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_Attributes addr 0x24e91cc size 0x8 virtual true final false
inline ::System::Reflection::ParameterAttributes get_Attributes() ;

/// @brief Method get_Member addr 0x24e91d4 size 0x8 virtual true final false
inline ::System::Reflection::MemberInfo* get_Member() ;

/// @brief Method get_Name addr 0x24e91dc size 0x8 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method get_ParameterType addr 0x24e91e4 size 0x8 virtual true final false
inline ::System::Type* get_ParameterType() ;

/// @brief Method get_Position addr 0x24e91ec size 0x8 virtual true final false
inline int32_t get_Position() ;

/// @brief Method get_IsIn addr 0x24e91f4 size 0x1c virtual false final false
inline bool get_IsIn() ;

/// @brief Method get_IsOptional addr 0x24e9210 size 0x1c virtual false final false
inline bool get_IsOptional() ;

/// @brief Method get_IsOut addr 0x24e922c size 0x1c virtual false final false
inline bool get_IsOut() ;

/// @brief Method get_DefaultValue addr 0x24e9248 size 0x28 virtual true final false
inline ::System::Object* get_DefaultValue() ;

/// @brief Method IsDefined addr 0x24e9270 size 0xb4 virtual true final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24e9324 size 0x7c virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24e93a0 size 0x104 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetRealObject addr 0x24e94a4 size 0x2e0 virtual true final true
inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ToString addr 0x24e9784 size 0x84 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "ParameterInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParameterInfo(ParameterInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParameterInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParameterInfo(ParameterInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParameterInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ParameterInfo, 0x40>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::ParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterInfo*, "System.Reflection", "ParameterInfo");
