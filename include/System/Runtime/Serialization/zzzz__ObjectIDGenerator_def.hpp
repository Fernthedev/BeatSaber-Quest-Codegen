#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectIDGenerator)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectIDGenerator);
// Type: System.Runtime.Serialization::ObjectIDGenerator
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3216))
// CS Name: ::System.Runtime.Serialization::ObjectIDGenerator*
class CORDL_TYPE ObjectIDGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_currentCount offset 0x10
 __declspec(property(get=__get_m_currentCount, put=__set_m_currentCount)) int32_t  m_currentCount;

/// @brief Field m_currentSize offset 0x14
 __declspec(property(get=__get_m_currentSize, put=__set_m_currentSize)) int32_t  m_currentSize;

/// @brief Field m_ids offset 0x18
 __declspec(property(get=__get_m_ids, put=__set_m_ids)) ::ArrayW<int64_t,::Array<int64_t>*>  m_ids;

/// @brief Field m_objs offset 0x20
 __declspec(property(get=__get_m_objs, put=__set_m_objs)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  m_objs;

constexpr void __set_m_currentCount(int32_t  value) ;

constexpr int32_t& __get_m_currentCount() ;

constexpr int32_t const& __get_m_currentCount() const;

constexpr void __set_m_currentSize(int32_t  value) ;

constexpr int32_t& __get_m_currentSize() ;

constexpr int32_t const& __get_m_currentSize() const;

constexpr void __set_m_ids(::ArrayW<int64_t,::Array<int64_t>*>  value) ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*>& __get_m_ids() ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& __get_m_ids() const;

constexpr void __set_m_objs(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_m_objs() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_m_objs() const;

static inline void setStaticF_sizes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_sizes() ;

static inline ::System::Runtime::Serialization::ObjectIDGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x24b84e4 size 0xd8 virtual false final false
inline void _ctor() ;

/// @brief Method FindElement addr 0x24b85bc size 0xc4 virtual false final false
inline int32_t FindElement(::System::Object*  obj, ByRef<bool>  found) ;

/// @brief Method GetId addr 0x24b8680 size 0x184 virtual true final false
inline int64_t GetId(::System::Object*  obj, ByRef<bool>  firstTime) ;

/// @brief Method HasId addr 0x24b8ab8 size 0xd4 virtual true final false
inline int64_t HasId(::System::Object*  obj, ByRef<bool>  firstTime) ;

/// @brief Method Rehash addr 0x24b8804 size 0x2b4 virtual false final false
inline void Rehash() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectIDGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectIDGenerator(ObjectIDGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectIDGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectIDGenerator(ObjectIDGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectIDGenerator()  = default;
public:


// Fields

// Static field sizes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectIDGenerator, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectIDGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectIDGenerator*, "System.Runtime.Serialization", "ObjectIDGenerator");
