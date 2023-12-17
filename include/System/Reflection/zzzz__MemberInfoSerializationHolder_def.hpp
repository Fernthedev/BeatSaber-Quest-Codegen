#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemberInfoSerializationHolder)
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Reflection {
class MemberInfoSerializationHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::MemberInfoSerializationHolder);
// Type: System.Reflection::MemberInfoSerializationHolder
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3509))
// CS Name: ::System.Reflection::MemberInfoSerializationHolder*
class CORDL_TYPE MemberInfoSerializationHolder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field m_memberName offset 0x10
 __declspec(property(get=__get_m_memberName, put=__set_m_memberName)) ::StringW  m_memberName;

/// @brief Field m_reflectedType offset 0x18
 __declspec(property(get=__get_m_reflectedType, put=__set_m_reflectedType)) ::System::RuntimeType*  m_reflectedType;

/// @brief Field m_signature offset 0x20
 __declspec(property(get=__get_m_signature, put=__set_m_signature)) ::StringW  m_signature;

/// @brief Field m_signature2 offset 0x28
 __declspec(property(get=__get_m_signature2, put=__set_m_signature2)) ::StringW  m_signature2;

/// @brief Field m_memberType offset 0x30
 __declspec(property(get=__get_m_memberType, put=__set_m_memberType)) ::System::Reflection::MemberTypes  m_memberType;

/// @brief Field m_info offset 0x38
 __declspec(property(get=__get_m_info, put=__set_m_info)) ::System::Runtime::Serialization::SerializationInfo*  m_info;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr operator  ::System::Runtime::Serialization::IObjectReference*() noexcept;

constexpr void __set_m_memberName(::StringW  value) ;

constexpr ::StringW& __get_m_memberName() ;

constexpr ::StringW const& __get_m_memberName() const;

constexpr void __set_m_reflectedType(::System::RuntimeType*  value) ;

constexpr ::System::RuntimeType* __get_m_reflectedType() ;

constexpr ::cordl_internals::to_const_pointer<::System::RuntimeType*> __get_m_reflectedType() const;

constexpr void __set_m_signature(::StringW  value) ;

constexpr ::StringW& __get_m_signature() ;

constexpr ::StringW const& __get_m_signature() const;

constexpr void __set_m_signature2(::StringW  value) ;

constexpr ::StringW& __get_m_signature2() ;

constexpr ::StringW const& __get_m_signature2() const;

constexpr void __set_m_memberType(::System::Reflection::MemberTypes  value) ;

constexpr ::System::Reflection::MemberTypes& __get_m_memberType() ;

constexpr ::System::Reflection::MemberTypes const& __get_m_memberType() const;

constexpr void __set_m_info(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get_m_info() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get_m_info() const;

/// @brief Method GetSerializationInfo addr 0x24edeec size 0x10 virtual false final false
static inline void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo*  info, ::StringW  name, ::System::RuntimeType*  reflectedClass, ::StringW  signature, ::System::Reflection::MemberTypes  type) ;

/// @brief Method GetSerializationInfo addr 0x24edefc size 0x314 virtual false final false
static inline void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo*  info, ::StringW  name, ::System::RuntimeType*  reflectedClass, ::StringW  signature, ::StringW  signature2, ::System::Reflection::MemberTypes  type, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  genericArguments) ;

static inline ::System::Reflection::MemberInfoSerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x24ee210 size 0x324 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x24ee534 size 0x60 virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetRealObject addr 0x24ee594 size 0x808 virtual true final false
inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemberInfoSerializationHolder(MemberInfoSerializationHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemberInfoSerializationHolder(MemberInfoSerializationHolder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemberInfoSerializationHolder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MemberInfoSerializationHolder, 0x40>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::MemberInfoSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfoSerializationHolder*, "System.Reflection", "MemberInfoSerializationHolder");
